// Function: FUN_00da49e0
// Address: 00da49e0
// Size: 581 bytes
// Class: Unknown


void FUN_00da49e0(undefined8 param_1,undefined8 param_2,host_info_t param_3,
                 mach_msg_type_number_t *param_4)

{
  longlong lVar1;
  kern_return_t kVar2;
  undefined8 *puVar3;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  undefined4 extraout_XMM0_Da;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  undefined4 local_2c;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02579cc0;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  FUN_00d500e0();
  *(int *)((longlong)puVar3 + 0xc) = unaff_ESI;
  if (unaff_ESI == 4) {
    if (DAT_028a8640 == 0) {
      DAT_028a8640 = 1;
      local_2c = 0xc;
      _mach_host_self();
      kVar2 = _host_info((host_t)&local_2c,(host_flavor_t)&local_60,param_3,param_4);
      if (kVar2 == 0) {
        DAT_028a8640 = local_60;
      }
    }
    FUN_00c8e690();
    lVar4 = CONCAT44(uStack_5c,local_60);
    if ((((local_58 == '\0') && (lVar4 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
       (CONCAT44(uStack_5c,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    ___bzero();
    lVar1 = puVar3[2];
    if (lVar1 == lVar4) {
      FUN_00d50b20();
    }
    else {
      puVar3[2] = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00c8e690();
    lVar4 = CONCAT44(uStack_5c,local_60);
    if ((((local_58 == '\0') && (lVar4 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
       (CONCAT44(uStack_5c,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    lVar1 = puVar3[2];
    if (lVar1 == lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar3[2] = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c92130();
    FUN_00c8e340(extraout_XMM0_Da,0);
    ___bzero();
    FUN_00da4d70();
    lVar4 = puVar3[4];
    lVar1 = CONCAT44(uStack_5c,local_60);
    if (lVar4 == lVar1) {
      if ((local_58 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((local_58 == '\0') && (lVar1 != 0)) {
        FUN_00d50b00();
        lVar4 = puVar3[4];
      }
      puVar3[4] = lVar1;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


