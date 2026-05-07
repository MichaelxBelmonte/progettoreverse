// Function: FUN_01921620
// Address: 01921620
// Size: 2359 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019217e1) */
/* WARNING: Removing unreachable block (ram,0x019217ed) */
/* WARNING: Removing unreachable block (ram,0x01921af0) */
/* WARNING: Removing unreachable block (ram,0x01921afc) */

void FUN_01921620(undefined8 param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined7 uVar8;
  undefined7 extraout_var;
  longlong lVar6;
  void *pvVar7;
  byte bVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar13;
  undefined8 unaff_R12;
  longlong *unaff_R15;
  undefined7 uVar14;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  uint local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  local_98 = param_2;
  if (*(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc) != 0) goto LAB_01921eb2;
  FUN_01f27fe0();
  (**(code **)(*(longlong *)CONCAT71(uStack_8f,local_90) + 0x610))();
  local_80 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027e07a0;
  if (DAT_027e07a0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_80 + 0x400))();
  local_48 = local_40;
  plVar12 = local_40;
  if (local_40 == (longlong *)0x0) {
    uVar13 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    local_48 = (longlong *)0x0;
    local_58 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar5 = FUN_00d50b00();
      uVar13 = 0;
      local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_0192175c;
      plVar4 = (longlong *)FUN_00d50b20();
    }
    else {
      local_38 = '\0';
      plVar4 = local_40;
    }
    local_58 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
    uVar13 = 0;
  }
LAB_0192175c:
  pVar10 = (pthread_key_t)plVar12;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  local_90 = 0;
  local_94 = uVar13;
  if ((local_48 == (longlong *)0x0) || (cVar3 = (**(code **)(*local_48 + 0x398))(), cVar3 == '\0'))
  {
    local_50 = (longlong *)0x0;
LAB_0192184d:
    local_38 = '\0';
    local_40 = (longlong *)0x0;
    bVar2 = true;
    uVar5 = 0;
    local_78 = (longlong *)0x0;
LAB_01921862:
    local_6c = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    local_60 = (longlong *)0x0;
LAB_0192186d:
    local_68 = (longlong *)0x0;
    lVar6 = DAT_027e07a8;
  }
  else {
    FUN_017a57b0();
    plVar12 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = plVar12;
    if (plVar12 == (longlong *)0x0) goto LAB_0192184d;
    local_78 = plVar12;
    uVar5 = FUN_017a7c70();
    local_68 = local_40;
    unaff_R15 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019219c8;
      }
      bVar2 = false;
      goto LAB_01921862;
    }
    if (local_40 == (longlong *)0x0) {
      local_6c = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      bVar2 = false;
      local_60 = local_40;
      local_50 = local_78;
      goto LAB_0192186d;
    }
LAB_019219c8:
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (pthread_key_t)local_68;
    }
    FUN_01313ad0();
    plVar12 = local_68;
    unaff_R15 = local_78;
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_108 = (longlong *)0x0;
    local_100 = '\0';
    local_f8 = (longlong *)0x0;
    local_f0 = '\0';
    FUN_012cc0c0(&local_f8,&local_108,1,0);
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      (**(code **)(*local_f8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      (**(code **)(*local_108 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_40 = plVar12;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_6c = 0;
    bVar2 = false;
    lVar6 = DAT_027e07a8;
    local_60 = plVar12;
    local_50 = unaff_R15;
  }
  DAT_027e07a8 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_e8 = lVar6;
  uVar5 = (**(code **)(*local_80 + 0x400))();
  plVar12 = local_40;
  uVar8 = (undefined7)((ulonglong)uVar5 >> 8);
  uVar14 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if (local_40 == local_48) {
    bVar9 = (byte)local_94 & local_40 != (longlong *)0x0;
    pVar10 = CONCAT31((int3)((uint)local_94 >> 8),bVar9);
    if (bVar9 == 1) {
      if (local_38 != '\0') goto LAB_01921900;
      uVar11 = CONCAT71(uVar14,1);
      FUN_00d50b00();
    }
    else {
      uVar11 = local_58 & 0xffffffff;
    }
LAB_01921b71:
    if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) {
      local_58 = uVar11 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_58 = uVar11 & 0xffffffff;
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar9 = (byte)local_58 & local_48 != (longlong *)0x0;
      pVar10 = (pthread_key_t)CONCAT71((int7)(local_58 >> 8),bVar9);
      uVar11 = CONCAT71(uVar14,1);
      if (bVar9 == 1) {
        local_48 = plVar12;
        FUN_00d50b20();
      }
      else {
        local_48 = plVar12;
      }
      goto LAB_01921b71;
    }
    bVar9 = (byte)local_58 & local_48 != (longlong *)0x0;
    pVar10 = (pthread_key_t)CONCAT71((int7)(local_58 >> 8),bVar9);
    local_48 = plVar12;
    if (bVar9 == 1) {
      local_48 = local_40;
      FUN_00d50b20();
      local_48 = plVar12;
      uVar8 = extraout_var;
    }
LAB_01921900:
    local_38 = '\0';
    local_58 = CONCAT71(uVar8,1);
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_90 = 0;
  local_d8 = local_48;
  local_d0 = '\0';
  FUN_017a57b0();
  plVar12 = local_40;
  plVar4 = local_50;
  if (local_78 == local_40) {
LAB_01921c47:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar4 = plVar12;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (!bVar2) {
        local_50 = plVar12;
        FUN_00d50b20();
      }
      goto LAB_01921c47;
    }
    if (!bVar2) {
      local_50 = local_40;
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
  local_50 = plVar4;
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    local_38 = '\0';
    local_40 = (longlong *)0x0;
    plVar12 = local_60;
    if (local_68 != (longlong *)0x0) goto LAB_01921ca4;
LAB_01921cfa:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_017a7c70();
    plVar12 = local_60;
    if (local_68 == local_40) goto LAB_01921cfa;
LAB_01921ca4:
    plVar12 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((char)local_6c == '\0') {
        local_60 = plVar12;
        FUN_00d50b20();
      }
      goto LAB_01921cfa;
    }
    if ((char)local_6c == '\0') {
      local_60 = local_40;
      FUN_00d50b20();
    }
  }
  if (plVar12 != (longlong *)0x0) {
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = local_48;
    local_c0 = '\0';
    local_b8 = (longlong *)0x0;
    local_b0 = '\0';
    local_a8 = (longlong *)0x0;
    local_a0 = '\0';
    FUN_012cc0c0(&local_a8,&local_b8,1,0);
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      (**(code **)(*local_b8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = plVar12;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01921eb2:
  iVar1 = *(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc);
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    uVar11 = (ulonglong)local_98;
    if (iVar1 <= (int)local_98) {
      uVar11 = 0;
    }
    if ((int)local_98 < 0) {
      uVar11 = 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10) + uVar11 * 8);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


