object DM1: TDM1
  OldCreateOrder = False
  Height = 429
  Width = 549
  object config: TADOConnection
    ConnectionString = 
      'Provider=MSDASQL.1;Password=arizda;Persist Security Info=True;Us' +
      'er ID=ariefset_arizda;Data Source=belajartajwid;Initial Catalog=' +
      'ariefset_arizda'
    LoginPrompt = False
    Provider = 'MSDASQL.1'
    Left = 264
    Top = 24
  end
  object tajwid: TADOQuery
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from hukumtajwid;')
    Left = 288
    Top = 64
  end
end
