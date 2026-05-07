// Function: FUN_009a3b9c
// Address: 009a3b9c
// Size: 1391 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Error converting the upper two digits of the Year from ILokTime (%d) to ptime."
//   "static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct ...
//   "Error converting the lower two digits of the Year from ILokTime (%d) to ptime."
//   "Error converting the Month from ILokTime (%d) to ptime."
//   "Error converting the Day from ILokTime (%d) to ptime."
//   "Error converting the Hour from ILokTime (%d) to ptime."
//   "Error converting the Minute from ILokTime (%d) to ptime."
//   "Error converting the Second from ILokTime (%d) to ptime."
//   "Conversion of ILokTime (Date: %08X, Time: %08X) resulted in a PTime that is not_a_date_time"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint * FUN_009a3b9c(uint64_t param_1)

{
  char cVar1;
  uint *puVar2;
  byte *this_ptr;
  uint *local_88;
  uint local_38 [2];
  
  cVar1 = FUN_00973b60(param_1,0);
  if (cVar1 == -1) {
    FUN_00925fd0();
    FUN_00926010();
    local_88 = local_38;
    local_38[0] = (uint)this_ptr[3];
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf38);
    FUN_009c720b();
  }
  cVar1 = FUN_00973b60();
  if (cVar1 == -1) {
    FUN_00925fd0();
    FUN_00926010();
    local_88 = local_38;
    local_38[0] = (uint)this_ptr[2];
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf43);
    FUN_009c720b();
  }
  cVar1 = FUN_00973b60();
  if (cVar1 == -2) {
    FUN_00925fd0();
    FUN_00926010();
    local_88 = local_38;
    local_38[0] = (uint)this_ptr[1];
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf52);
    FUN_009c720b();
  }
  cVar1 = FUN_00973b60();
  if (cVar1 == -2) {
    FUN_00925fd0();
    FUN_00926010();
    local_88 = local_38;
    local_38[0] = (uint)*this_ptr;
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf5f);
    FUN_009c720b();
  }
  cVar1 = FUN_00973b60();
  if (cVar1 == -1) {
    FUN_00925fd0();
    FUN_00926010();
    local_88 = local_38;
    local_38[0] = (uint)this_ptr[7];
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf6e);
    FUN_009c720b();
  }
  cVar1 = FUN_00973b60();
  if (cVar1 == -1) {
    FUN_00925fd0();
    FUN_00926010();
    local_88 = local_38;
    local_38[0] = (uint)this_ptr[6];
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf79);
    FUN_009c720b();
  }
  cVar1 = FUN_00973b60();
  if (cVar1 == -1) {
    FUN_00925fd0();
    FUN_00926010();
    local_88 = local_38;
    local_38[0] = (uint)this_ptr[5];
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf84);
    FUN_009c720b();
  }
  FUN_009a81f8();
  FUN_0097e070();
  FUN_00997550();
  FUN_0097e7bc(1,1);
  FUN_009a8638(0,cVar1);
  FUN_00953fa0();
  puVar2 = (uint *)FUN_009585b8();
  if (local_88 == puVar2) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("static boost::posix_time::ptime pace::ILok2Commander::GetPtime_FromILokTime(const ILok2_TimeStruct &)"
                 ,0xf9a);
    FUN_009c720b();
  }
  return local_88;
}

