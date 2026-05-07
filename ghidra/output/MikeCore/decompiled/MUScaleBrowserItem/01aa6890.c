// Function: FUN_01aa6890
// Address: 01aa6890
// Size: 602 bytes
// Class: MUScaleBrowserItem


/* WARNING: Removing unreachable block (ram,0x01aa68ea) */
/* WARNING: Removing unreachable block (ram,0x01aa68f6) */
/* WARNING: Removing unreachable block (ram,0x01aa6a80) */
/* WARNING: Removing unreachable block (ram,0x01aa6a89) */

void FUN_01aa6890(pthread_key_t param_1)

{
  void *pvVar1;
  longlong *unaff_RDI;
  undefined4 uVar2;
  undefined8 unaff_R13;
  longlong lVar3;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[5] == 0) {
    return;
  }
  FUN_017a57b0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_017a7c70();
  lVar3 = local_40;
  if (local_40 == 0) {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
    lVar3 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar2 = 0;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01aa6977;
      FUN_00d50b20();
    }
    uVar2 = 0;
  }
LAB_01aa6977:
  FUN_00d50b20();
  if (lVar3 != 0) {
    local_48 = uVar2;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    uVar2 = local_48;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = (longlong *)0x0;
    local_70 = '\0';
    local_68 = (longlong *)0x0;
    local_60 = '\0';
    FUN_012cc0c0(&local_68,&local_78,1,0);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = '\0';
    local_58 = lVar3;
    (**(code **)(*unaff_RDI + 0x370))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


