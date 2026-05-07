// Function: FUN_007f1730
// Address: 007f1730
// Size: 1311 bytes
// Class: GNOperationProgressObserver


/* WARNING: Removing unreachable block (ram,0x007f17f2) */
/* WARNING: Removing unreachable block (ram,0x007f17fe) */

void FUN_007f1730(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  bool bVar7;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined8 local_38;
  
  lVar5 = param_1;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  pVar4 = (pthread_key_t)lVar5;
  FUN_00d4ff40();
  *puVar1 = &DAT_02510d80;
  puVar1[2] = &DAT_02511108;
  puVar1[3] = 0;
  FUN_00d500e0();
  if (*param_2 != 0) {
    uVar3 = *unaff_RSI;
    local_b0 = '\0';
    local_b8 = *param_2;
    FUN_007f28a0(uVar3,&local_b8);
    pVar4 = (pthread_key_t)uVar3;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00363970();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007f184c;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_007f184c:
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    if (local_48 == (longlong *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      bVar7 = local_78 != 0;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_68 = local_78;
      local_60 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_60 = '\x01';
      uVar3 = FUN_016cbba0();
      plVar6 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        local_38 = 0;
      }
      else if (local_40 == '\0') {
        uVar3 = FUN_00d50b00();
        local_38 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        local_38 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = 0;
      plVar6 = (longlong *)0x0;
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    goto LAB_007f1b72;
  }
  plVar6 = (longlong *)0x0;
  local_38 = 0;
LAB_007f1b72:
  if (*param_2 != 0) {
    local_90 = '\0';
    local_98 = 0;
    local_88 = 0;
    local_80 = '\0';
    FUN_007f28a0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar6 != (longlong *)0x0) && (param_1 != 0)) {
    FUN_01f27fe0();
    (**(code **)(*local_48 + 0x560))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_38 == '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


