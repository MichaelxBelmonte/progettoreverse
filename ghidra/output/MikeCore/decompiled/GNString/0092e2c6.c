// Function: FUN_0092e2c6
// Address: 0092e2c6
// Size: 546 bytes
// Class: GNString
// String references:
//   "getLocationTypesFromLocationGroup"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "petpub::eLocationType pace::AuthorizationVerifier::getLocationTypesFromLocationGroup(const petpub::...


undefined8 FUN_0092e2c6(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined5 local_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined6 local_a4;
  undefined2 uStack_9e;
  undefined6 uStack_9c;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined *local_50 [2];
  undefined7 local_40;
  undefined1 uStack_39;
  undefined4 local_38;
  undefined3 uStack_34;
  
  local_50[0] = &DAT_0251a480;
  uStack_34 = 0;
  local_100 = &DAT_0251a4d8;
  local_f8 = 0;
  local_f0 = &DAT_0251d5b0;
  local_e8 = 0;
  uStack_e3 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a4 = 0;
  uStack_9e = 0;
  uStack_9c = 0;
  local_90 = 4;
  local_8c = 0;
  local_8a = 1;
  local_40 = (undefined7)param_1;
  uStack_39 = (undefined1)((ulonglong)param_1 >> 0x38);
  local_38 = param_3;
  FUN_009b4e10();
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    plVar2 = *(longlong **)(unaff_RDI + 8);
    if (plVar2 == (longlong *)0x0) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      uVar3 = FUN_00928ab0("petpub::eLocationType pace::AuthorizationVerifier::getLocationTypesFromLocationGroup(const petpub::eLocationGroup, pet::fusion::LocationGroupAttributes *, petpub::eLocationType, petpub::IlokType)"
                           ,0xbd9);
      FUN_009bd14b(uVar3,uVar1);
      plVar2 = *(longlong **)(unaff_RDI + 8);
    }
    (**(code **)(*plVar2 + 0x130))(4,local_50);
  }
  else {
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    local_58 = 0;
    local_68 = 0;
    lStack_60 = 0;
    FUN_0092e595(0,1);
    plVar2 = &local_68;
    uVar3 = FUN_00928f8a(plVar2,&local_88);
    FUN_0094f1cf(uVar3,&local_100);
    if (local_68 != 0) {
      lStack_60 = local_68;
      operator_delete(plVar2);
    }
    if (local_88 != 0) {
      lStack_80 = local_88;
      operator_delete(plVar2);
    }
  }
  FUN_0094d0ec();
  if (param_2 != 0) {
    FUN_00917e96();
  }
  uVar1 = local_f8;
  FUN_008c4be2();
  FUN_008c4740();
  return uVar1;
}


