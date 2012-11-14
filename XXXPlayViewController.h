//
//  XXXPlayViewController.h
//  APP4
//
//  Created by user on 12-10-25.
//  Copyright (c) 2012年 FreeBox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import "XXXPlayView.h"
#import "SubtitlePackage.h"
#import "ImagesPackage.h"
#import "AudiosPackage.h"

//#define videoPath @"file:///Users/user/Documents/Downton.Abbey.0306.HDTVx264.mp4"
//#define subtitlePath @"/Users/user/Documents/DowntonSubtitle0306"
//#define savePath @"/Users/user/Documents/save/"

#define videoPath @"file:///Users/apple/Desktop/Downton.Abbey.0306.HDTVx264.mp4"
#define subtitlePath @"/Users/apple/Desktop/DowntonSubtitle0306"
#define savePath @"/Users/apple/Desktop/save/"


@interface XXXPlayViewController : UIViewController{
    
    NSURL *mURL;
    AVPlayer *mPlayer;
    AVPlayerItem *mPlayerItem;
    AVURLAsset *mAsset;
    SubtitlePackage *mSubtitlePackage;
    
    
    
    float mRestoreAfterScrubbingRate;
    BOOL seekToZeroBeforePlay;
    id mTimeObserver;
    id mTimeObserverForSubtitle;
    
    IBOutlet XXXPlayView *mPlayView;
}

@property (retain, nonatomic) NSURL *mURL;
@property (retain, nonatomic) AVPlayer *mPlayer;
@property (retain, nonatomic) AVPlayerItem *mPlayerItem;
@property (retain, nonatomic) AVURLAsset *mAsset;
@property (retain) SubtitlePackage *mSubtitlePackage;


@property (strong, nonatomic) IBOutlet XXXPlayView *mPlayView;

@property (strong, nonatomic) IBOutlet UIToolbar *mToolbar;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *mPlayButton;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *mPauseButton;
@property (strong, nonatomic) IBOutlet UISlider *mScrubber;
@property (strong, nonatomic) IBOutlet UILabel *displayTimeLabel;

@property (strong, nonatomic) IBOutlet UILabel *displayEngLabel;
@property (strong, nonatomic) IBOutlet UILabel *displayChiLabel;



@property (strong, nonatomic) IBOutlet UIControl *imageExtractionLayer;
@property (strong) AVAssetImageGenerator *imageGenerator;


- (IBAction)Play:(id)sender;
- (IBAction)Pause:(id)sender;
- (IBAction)Scrub:(id)sender;
- (IBAction)beginScrubbing:(id)sender;
- (IBAction)endScrubbing:(id)sender;
- (IBAction)extractImageAndAudio:(id)sender;



@end

