Pod::Spec.new do |s|
    s.name                       = 'LTGameSDK'
    s.version                    = '1.0.0'
    s.summary                    = '非常简单易用的轻量级编辑框。'
    s.homepage                   = 'https://github.com/Jonzzs/GZZEditView'
    s.license                    = { :type => 'MIT', :file => 'LICENSE' }
    s.author                     = { 'Jonzzs' => '292710547@qq.com' }
    s.social_media_url           = 'http://weibo.com/Jonzzs'
    s.platform                   = :ios
    s.ios.deployment_target      = '9.0'
    s.swift_version              = '4.0'
    s.source                     = { :git => 'https://github.com/Jonzzs/GZZEditView.git', :tag => s.version }
    s.source_files               = 'GZZEditView/*.{h,m}'
    s.resource_bundle            = { 'GZZEditView' => ['Resources/**/*.xcassets'] }
    s.resource                   = 'xxx/xxx.bundle'
    s.ios.vendored_frameworks    = 'xxx/xxx.framework'
    s.frameworks                 = 'UIKit'
    s.dependency                 'Masonry'
    s.subspec 'GroupName' do |s|
        ...
    end