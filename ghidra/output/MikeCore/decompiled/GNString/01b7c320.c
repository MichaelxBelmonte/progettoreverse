// Function: FUN_01b7c320
// Address: 01b7c320
// Size: 692 bytes
// Class: GNString


ulonglong FUN_01b7c320(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined7 uVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar3 == '\0') {
    (**(code **)(*unaff_RDI + 0x370))();
    local_58 = *unaff_RSI;
    local_50 = '\0';
    uVar4 = (**(code **)(*local_48 + 0x3b8))();
    uVar5 = (ulonglong)uVar4;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*unaff_RDI + 0x9d0))();
    if (cVar3 != '\0') {
      uVar5 = (**(code **)(*unaff_RDI + 0x9d8))();
      uVar9 = (undefined7)((ulonglong)unaff_RSI >> 8);
      if (uVar5 >> 0x20 == 0) {
        lVar1 = unaff_RDI[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01252670(&local_60,0,local_68,0);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          uVar7 = 0;
          bVar2 = false;
        }
        else {
          uVar7 = CONCAT71(uVar9,1);
          bVar2 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = unaff_RDI[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
        FUN_012521f0(uVar7,0,&local_60,local_68);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          uVar7 = 0;
          bVar2 = false;
        }
        else {
          uVar7 = CONCAT71(uVar9,1);
          bVar2 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_48 != (longlong *)0x0) {
        if (param_2 != '\0') {
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_88 = local_48;
          FUN_01b755e0(local_60,&local_88,&local_78);
        }
        if (bVar2) {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        goto LAB_01b7c5c3;
      }
    }
    uVar5 = 0;
  }
LAB_01b7c5c3:
  return uVar5 & 0xffffffff;
}


