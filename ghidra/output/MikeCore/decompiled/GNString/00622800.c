// Function: FUN_00622800
// Address: 00622800
// Size: 1286 bytes
// Class: GNString


ulonglong FUN_00622800(pthread_key_t param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5d8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00622863;
    }
  }
  else if (local_40 != 0) {
LAB_00622863:
    FUN_0063f230();
    lVar9 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 == 0) {
LAB_006228c5:
      FUN_006f4810();
      FUN_002eacb0();
      lVar9 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_58 = lVar9;
      iVar1 = *(int *)(lVar9 + 0xc);
      if ((1 < iVar1) && (param_2 != '\0')) {
        FUN_006f3f00();
        (**(code **)(*local_f8 + 0x628))();
        local_78 = local_50;
        local_70 = 0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_70 = '\x01';
        local_d8 = local_58;
        local_d0 = '\0';
        FUN_006f3f00();
        FUN_00757c60();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        local_68 = local_88;
        local_60 = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_60 = '\x01';
        plVar8 = &local_68;
        FUN_00722260(plVar8,&local_d8);
        lVar2 = local_40;
        pVar7 = (pthread_key_t)plVar8;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        local_40 = lVar2;
        FUN_00d23f50();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_006f3f00();
        (**(code **)(*local_50 + 0x628))();
        lVar9 = local_40;
        pvVar5 = _pthread_getspecific(pVar7);
        lVar3 = local_40;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar9 = lVar3, lVar6 != 0)) {
          lVar9 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        local_a8 = local_58;
        local_a0 = '\0';
        local_98 = lVar2;
        local_90 = '\0';
        FUN_004a3f30();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      uVar10 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1 < iVar1);
      FUN_00d50b20();
    }
    else {
      FUN_0063f230();
      lVar9 = local_40;
      cVar4 = FUN_00212c70();
      if ((local_38 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_006228c5;
      uVar10 = 0;
    }
    FUN_00d50b20();
    goto LAB_00622cc0;
  }
  uVar10 = 0;
LAB_00622cc0:
  return uVar10 & 0xffffffff;
}


