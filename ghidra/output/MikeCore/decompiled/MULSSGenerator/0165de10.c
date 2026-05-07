// Function: FUN_0165de10
// Address: 0165de10
// Size: 928 bytes
// Class: MULSSGenerator


longlong * FUN_0165de10(longlong *param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *local_res8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 local_88;
  int local_84;
  longlong *local_80;
  longlong local_60;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar10 = &local_a0;
  if (param_3 != (longlong *)0x0) {
    plVar10 = param_3;
  }
  puVar11 = &local_98;
  if (param_4 != (undefined8 *)0x0) {
    puVar11 = param_4;
  }
  local_90 = &local_88;
  if (local_res8 != (undefined4 *)0x0) {
    local_90 = local_res8;
  }
  local_88 = 0xffffffff;
  pvVar3 = _pthread_getspecific((pthread_key_t)local_90);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_84 = param_2;
  FUN_01252670(plVar10,1,puVar11,local_90);
  local_60 = local_50;
  local_38[0] = local_48[0];
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  pcVar4 = local_38;
  if (!(bool)local_40[0]) {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    lVar7 = FUN_00e7bdb0();
    *param_1 = lVar7;
    lVar7 = FUN_00e7bdb0();
    *plVar10 = lVar7;
    uVar8 = FUN_00e7bdb0();
    *puVar11 = uVar8;
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    return unaff_RDI;
  }
  plVar5 = (longlong *)FUN_0165be20();
  iVar1 = local_84;
  if ((0 < local_84) && (*(int *)((longlong)puVar11 + 4) != 0)) {
    local_48[0] = '\0';
    local_50 = 0;
    local_80 = plVar5;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar5 = plVar10;
      cVar2 = FUN_01253c10(plVar10,&local_50,puVar11,local_90);
      lVar7 = local_50;
      if (cVar2 == '\0') {
LAB_0165e0ef:
        local_38[0] = '\0';
        *param_1 = (longlong)local_80;
        *unaff_RDI = local_60;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if ((local_48[0] != '\0') && (local_38[0] = '\0', local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165e17d;
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar5);
      lVar9 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = lVar9, lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      lVar9 = local_50;
      if (iVar1 < *(int *)(lVar7 + 0x44)) goto LAB_0165e0ef;
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar5);
      lVar7 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar9 = lVar7, lVar6 != 0)) {
        lVar9 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if ((*(int *)(lVar9 + 0x44) == iVar1) || (*(int *)((longlong)puVar11 + 4) == 0))
      goto LAB_0165e11c;
      local_60 = local_50;
      local_80 = (longlong *)*plVar10;
    } while( true );
  }
  *param_1 = (longlong)plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = local_60;
  if (local_40[0] == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_40[0] = '\0';
  }
LAB_0165e190:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_0165e11c:
  local_38[0] = '\0';
  *param_1 = *plVar10;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = local_50;
  if (local_48[0] == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_48[0] = '\0';
  }
LAB_0165e17d:
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0165e190;
}


