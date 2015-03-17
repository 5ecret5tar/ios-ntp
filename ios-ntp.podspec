Pod::Spec.new do |s|
  s.name         = 'ios-ntp'
  s.version      = '1.0.46'
  s.summary      = 'SNTP implementation for iOS.'
  s.homepage     = 'https://github.com/5ecret5tar/ios-ntp'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.source       = { :git => 'https://github.com/5ecret5tar/ios-ntp.git', :tag => 'v1.0.46' }
  s.author       = { 'Gavin Eadie' => 'https://github.com/gavineadie' }
  s.ios.deployment_target = '7.0'
  s.source_files = 'ios-ntp-lib/*.{h,m}'
  s.resources = 'ios-ntp-rez/*.hosts',
  s.framework = 'CFNetwork'
  s.dependency 'CocoaAsyncSocket', '~>7.4.1'
  s.requires_arc = true
end