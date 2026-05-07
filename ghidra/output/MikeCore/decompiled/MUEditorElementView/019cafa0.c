// Function: FUN_019cafa0
// Address: 019cafa0
// Size: 1110 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019cb366) */
/* WARNING: Removing unreachable block (ram,0x019cb36f) */
/* WARNING: Removing unreachable block (ram,0x019cb1bd) */
/* WARNING: Removing unreachable block (ram,0x019cb1ca) */
/* WARNING: Removing unreachable block (ram,0x019cb334) */
/* WARNING: Removing unreachable block (ram,0x019cb33d) */
/* WARNING: Removing unreachable block (ram,0x019cb3d0) */
/* WARNING: Removing unreachable block (ram,0x019cb3dc) */
/* WARNING: Removing unreachable block (ram,0x019cb248) */
/* WARNING: Removing unreachable block (ram,0x019cb251) */
/* WARNING: Removing unreachable block (ram,0x019cb07f) */
/* WARNING: Removing unreachable block (ram,0x019cb088) */
/* WARNING: Removing unreachable block (ram,0x019cb187) */
/* WARNING: Removing unreachable block (ram,0x019cb190) */
/* WARNING: Removing unreachable block (ram,0x019cb309) */
/* WARNING: Removing unreachable block (ram,0x019cb312) */
/* WARNING: Removing unreachable block (ram,0x019cb0cf) */
/* WARNING: Removing unreachable block (ram,0x019cb0f0) */
/* WARNING: Removing unreachable block (ram,0x019cb0d1) */
/* WARNING: Removing unreachable block (ram,0x019cb0f2) */

ulonglong FUN_019cafa0(undefined *param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  undefined *local_70;
  char local_68;
  int local_58;
  undefined *local_40;
  char local_38;
  
  puVar7 = local_70;
  (**(code **)(*unaff_RDI + 0xe20))();
  iVar1 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    uVar9 = 0;
    goto LAB_019cb402;
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  (**(code **)(*unaff_RDI + 0xe20))();
  if (local_68 == '\0') {
    puVar8 = &DAT_02572358;
    if (local_70 != (undefined *)0x0) {
      FUN_00d50b00();
      goto LAB_019cb08d;
    }
  }
  else {
    puVar8 = &DAT_02572358;
    if (local_70 != (undefined *)0x0) {
LAB_019cb08d:
      local_68 = '\0';
      local_70 = (undefined *)0x0;
      local_58 = -1;
      puVar8 = &DAT_02572358;
LAB_019cb0cb:
      while( true ) {
        lVar10 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(puVar7 + 0xc) <= local_58) break;
        local_70 = *(undefined **)(*(longlong *)(puVar7 + 0x10) + 8 + lVar10 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(puVar7 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012972e0();
        puVar8 = local_40;
        if (local_38 == '\0') goto LAB_019cb170;
        if (local_40 != (undefined *)0x0) goto LAB_019cb1a0;
      }
      FUN_001159b0();
      FUN_00d50b20();
      param_1 = puVar7;
    }
  }
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  if ((iVar1 != 0) && (param_2 != '\0')) {
    (**(code **)(*unaff_RDI + 0x9b0))();
    if (local_68 == '\0') {
      if (local_70 != (undefined *)0x0) {
        FUN_00d50b00();
        goto LAB_019cb256;
      }
    }
    else if (local_70 != (undefined *)0x0) {
LAB_019cb256:
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar10 = 0;
        do {
          puVar8 = local_40;
          puVar7 = *(undefined **)(*(longlong *)(local_70 + 0x10) + lVar10 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012972e0();
          if ((local_38 == '\0') && (local_40 != (undefined *)0x0)) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d23d70();
          if (cVar3 != '\0') {
            FUN_00d21140();
            local_40 = puVar7;
          }
          local_38 = '\0';
          if (puVar8 != (undefined *)0x0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xdc8))();
    puVar8 = local_70;
  }
  uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),iVar1 != 0);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_019cb402:
  return uVar9 & 0xffffffff;
LAB_019cb170:
  if (local_40 != (undefined *)0x0) {
    FUN_00d50b00();
LAB_019cb1a0:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_019cb0cb;
}


