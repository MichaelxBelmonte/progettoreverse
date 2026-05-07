// Function: FUN_0165cae0
// Address: 0165cae0
// Size: 962 bytes
// Class: MULSSGenerator


longlong * FUN_0165cae0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *unaff_RDI;
  undefined8 *puVar11;
  undefined4 *local_res8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 local_7c;
  longlong local_78;
  int iStack_5c;
  undefined8 local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar9 = &local_a0;
  if (param_3 != (longlong *)0x0) {
    plVar9 = param_3;
  }
  puVar11 = &local_98;
  if (param_4 != (undefined8 *)0x0) {
    puVar11 = param_4;
  }
  local_90 = &local_7c;
  if (local_res8 != (undefined4 *)0x0) {
    local_90 = local_res8;
  }
  local_7c = 0xffffffff;
  pvVar2 = _pthread_getspecific((pthread_key_t)local_90);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01252670(plVar9,1,puVar11,local_90);
  lVar7 = local_50;
  plVar10 = (longlong *)local_48;
  local_38[0] = local_48[0];
  plVar3 = plVar10;
  if (local_48[0] == '\0') {
    plVar3 = (longlong *)local_38;
  }
  *(undefined1 *)plVar3 = 0;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  plVar3 = (longlong *)local_38;
  if (!(bool)local_40[0]) {
    plVar3 = (longlong *)local_40;
  }
  *(undefined1 *)plVar3 = 0;
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 == 0) {
    lVar7 = FUN_00e7bdb0();
    *param_1 = lVar7;
    lVar7 = FUN_00e7bdb0();
    *plVar9 = lVar7;
    uVar8 = FUN_00e7bdb0();
    *puVar11 = uVar8;
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    return unaff_RDI;
  }
  lVar4 = FUN_0165be20();
  local_50 = (ulonglong)local_50._4_4_ << 0x20;
  iStack_5c = (int)((ulonglong)param_2 >> 0x20);
  if (((iStack_5c == 0) || (cVar1 = FUN_00e7c650(), cVar1 != '\0')) &&
     (*(int *)((longlong)puVar11 + 4) != 0)) {
    local_48[0] = '\0';
    local_50 = 0;
    local_78 = lVar7;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar10);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar10 = plVar9;
      cVar1 = FUN_01253c10(plVar9,&local_50,puVar11,local_90);
      lVar7 = local_50;
      if (cVar1 == '\0') {
LAB_0165cdf8:
        local_38[0] = '\0';
        *param_1 = lVar4;
        *unaff_RDI = local_78;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        lVar7 = local_78;
        goto joined_r0x0165ce1d;
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar10);
      lVar6 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar7 = lVar6, lVar5 != 0)) {
        lVar7 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      if (((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
         (cVar1 = FUN_00e7c020(), cVar1 != '\0')) goto LAB_0165cdf8;
      lVar7 = local_50;
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar10);
      lVar4 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = lVar4, lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if ((((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
          (cVar1 = FUN_00e7c000(), cVar1 != '\0')) || (*(int *)((longlong)puVar11 + 4) == 0))
      goto LAB_0165ce21;
      local_78 = local_50;
      lVar4 = *plVar9;
    } while( true );
  }
  *param_1 = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = lVar7;
  if (local_40[0] == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_40[0] = '\0';
  }
LAB_0165ce82:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_0165ce21:
  local_38[0] = '\0';
  *param_1 = *plVar9;
  plVar9 = unaff_RDI + 1;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = local_50;
  if (local_48[0] != '\0') {
    *(undefined1 *)plVar9 = 1;
    plVar9 = (longlong *)local_48;
  }
  *(undefined1 *)plVar9 = 0;
  lVar7 = local_78;
joined_r0x0165ce1d:
  local_78 = lVar7;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0165ce82;
}


