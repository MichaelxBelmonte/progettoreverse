// Function: FUN_018bb840
// Address: 018bb840
// Size: 1177 bytes
// Class: GNString
// String references:
//   "%@%@"


void FUN_018bb840(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong **pplVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d654d0();
  cVar2 = FUN_00d59e50();
  if ((cVar2 != '\0') || (cVar2 = FUN_00d59e50(), cVar2 != '\0')) {
    FUN_018bb4d0();
  }
  cVar2 = FUN_00d59e50();
  if (cVar2 == '\0') {
    return;
  }
  plVar7 = *(longlong **)(unaff_RDI + 0x80);
  local_68 = '\0';
  local_70 = plVar7;
  FUN_01152ba0();
  if (plVar7 == (longlong *)0x0) {
LAB_018bb8db:
    pplVar3 = &DAT_02802688;
    plVar8 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_018bb8eb;
LAB_018bb911:
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_018bb8db;
    pplVar3 = &local_70;
    plVar8 = local_70;
    if (local_68 == '\0') goto LAB_018bb911;
LAB_018bb8eb:
    *(undefined1 *)(pplVar3 + 1) = 0;
    if ((local_68 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d17d0();
  plVar7 = local_40;
  pvVar4 = _pthread_getspecific(param_1);
  plVar8 = local_40;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar7 = plVar8, lVar5 != 0)) {
    plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = DAT_027dc8f8;
  if (DAT_027dc8f8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar5;
  local_b0 = '\x01';
  (**(code **)(*plVar7 + 0x88))();
  plVar7 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027dc900;
  if (plVar7 == (longlong *)0x0) goto LAB_018bbcb2;
  if (DAT_027dc900 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar5;
  local_a0 = '\x01';
  cVar2 = FUN_00d90870();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027dc900;
  if (cVar2 != '\0') goto LAB_018bbcb2;
  if (DAT_027dc900 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar5;
  local_c0 = plVar7;
  pVar6 = 2;
  FUN_00083ea0(2,&local_c0);
  FUN_00d8cb40();
  plVar1 = local_40;
  lVar5 = local_78;
  plVar8 = plVar7;
  if (plVar7 == local_40) {
joined_r0x018bbb36:
    local_78 = lVar5;
    if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      lVar5 = local_78;
      plVar7 = plVar1;
      plVar8 = local_40;
      goto joined_r0x018bbb36;
    }
    FUN_00d50b20();
    local_38 = '\0';
    plVar7 = local_40;
    lVar5 = local_78;
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d17d0();
  plVar8 = local_70;
  pvVar4 = _pthread_getspecific(pVar6);
  plVar1 = local_70;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar8 = plVar1, lVar5 != 0)) {
    plVar8 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = DAT_027dc8f8;
  local_90 = '\0';
  local_98 = plVar7;
  if (DAT_027dc8f8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar5;
  local_80 = '\x01';
  (**(code **)(*plVar8 + 0x1f0))(1,&local_88,1);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_018bbcb2:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


