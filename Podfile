
#pod：是声明特定依赖项的方法。
#podspec：提供了一个简单的API来创建podspecs。
#podspec :name => 'QuickDialog'
#podspec :path => '/Documents/PrettyKit/PrettyKit.podspec'
#target：是您如何将依赖项定位到Xcode项目中的特定目标。

#Podfile可以非常简单 例：
#target 'JSToolLibrary'
#pod 'AFNetworking', '~> 1.0'


#更复杂的Podfile的示例

#平台
platform :ios, '12.0'
#禁止来自CocoaPods库的所有警告。
inhibit_all_warnings!

target 'JSToolLibrary' do
    pod 'ObjectiveSugar', '~> 0.5'
#    禁止单个个Pod的警告
    pod 'SSZipArchive', :inhibit_warnings => true
#    仅在调试中启用
    pod 'PonyDebugger', :configuration => 'Debug'
    
    target "JSToolLibraryTests" do
#       inherit继承
        inherit! :search_paths
        pod 'OCMock', '~> 2.0.1'
    end
end


#Ruby的语言
# 实现post_install Hooks（钩）
post_install do |installer|
    puts "##### post_install start #####"
    
    # 1. 遍历项目中所有target
    installer.pods_project.targets.each do |target|
        # puts 为在控制台打印方法
        puts "#{target.name}"
    end
    
    # 为了打印的日志方便查看，使用╟符号修饰
    puts "╟ podfile"
    # 打印podfile属性列表
    installer.podfile.instance_variables.each do |variableName|
        # 遍历属性并打印
        puts "  ╟ #{variableName}"
    end
    
    puts "╟ lockfile"
    # 打印lockfile属性列表
    installer.lockfile.instance_variables.each do |variableName|
        # 遍历属性并打印
        puts "  ╟ #{variableName}"
    end
    
    # 暂时只看属性，不打印方法列表，因为暂时只看属性就够了
    puts "##### post_install end #####"
    
end



