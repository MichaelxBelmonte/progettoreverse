// Function: FUN_019c8d20
// Address: 019c8d20
// Size: 1894 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c906c) */
/* WARNING: Removing unreachable block (ram,0x019c9078) */
/* WARNING: Removing unreachable block (ram,0x019c8fdf) */
/* WARNING: Removing unreachable block (ram,0x019c8feb) */
/* WARNING: Removing unreachable block (ram,0x019c8f57) */
/* WARNING: Removing unreachable block (ram,0x019c8f63) */
/* WARNING: Removing unreachable block (ram,0x019c8ecf) */
/* WARNING: Removing unreachable block (ram,0x019c8edb) */
/* WARNING: Removing unreachable block (ram,0x019c8e47) */
/* WARNING: Removing unreachable block (ram,0x019c8e53) */
/* WARNING: Removing unreachable block (ram,0x019c8dbf) */
/* WARNING: Removing unreachable block (ram,0x019c8dcb) */
/* WARNING: Removing unreachable block (ram,0x019c8e03) */
/* WARNING: Removing unreachable block (ram,0x019c8e0f) */
/* WARNING: Removing unreachable block (ram,0x019c8e8b) */
/* WARNING: Removing unreachable block (ram,0x019c8e97) */
/* WARNING: Removing unreachable block (ram,0x019c8f13) */
/* WARNING: Removing unreachable block (ram,0x019c8f1f) */
/* WARNING: Removing unreachable block (ram,0x019c8f9b) */
/* WARNING: Removing unreachable block (ram,0x019c8fa7) */
/* WARNING: Removing unreachable block (ram,0x019c9023) */
/* WARNING: Removing unreachable block (ram,0x019c902f) */
/* WARNING: Removing unreachable block (ram,0x019c90ac) */
/* WARNING: Removing unreachable block (ram,0x019c90b8) */
/* WARNING: Removing unreachable block (ram,0x019c90fd) */
/* WARNING: Removing unreachable block (ram,0x019c9106) */
/* WARNING: Removing unreachable block (ram,0x019c91cf) */
/* WARNING: Removing unreachable block (ram,0x019c91f0) */
/* WARNING: Removing unreachable block (ram,0x019c91d1) */
/* WARNING: Removing unreachable block (ram,0x019c91f2) */

ulonglong FUN_019c8d20(char param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  char *pcVar11;
  undefined *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined7 uVar15;
  longlong *unaff_RDI;
  undefined *local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar13 = 0;
  cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar5 == '\0') goto LAB_019c9497;
  (**(code **)(*unaff_RDI + 0xe30))();
  iVar6 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  uVar3 = (uint3)((uint)iVar6 >> 8);
  uVar13 = (ulonglong)CONCAT31(uVar3,iVar6 != 0);
  if ((iVar6 == 0) || (param_2 == '\0')) goto LAB_019c9497;
  (**(code **)(*unaff_RDI + 0xf40))();
  (**(code **)(*unaff_RDI + 0xf68))();
  (**(code **)(*unaff_RDI + 0xf70))();
  (**(code **)(*unaff_RDI + 0xf78))();
  (**(code **)(*unaff_RDI + 0xf80))();
  (**(code **)(*unaff_RDI + 0xf88))();
  (**(code **)(*unaff_RDI + 0xf90))();
  (**(code **)(*unaff_RDI + 0xf98))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *unaff_RDI))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *unaff_RDI + 8))();
  if (param_1 == '\0') {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *unaff_RDI + 0x10))();
    cVar5 = FUN_019c98c0();
    uVar13 = CONCAT71((uint7)uVar3,1);
    if (cVar5 == '\0') goto LAB_019c9497;
  }
  else {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *unaff_RDI + 0x18))();
  }
  (**(code **)(*unaff_RDI + 0xe30))();
  if ((local_68 == '\0') && (local_70 != (undefined *)0x0)) {
    FUN_00d50b00();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_025683c0;
  *puVar8 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (local_70 == (undefined *)0x0) {
LAB_019c934d:
    if (0 < *(int *)((longlong)puVar7 + 0xc)) {
      lVar9 = 0;
      do {
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        iVar6 = *(int *)(local_48 + 0xc);
        iVar2 = *(int *)(puVar8[2] + lVar9 * 4);
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == iVar2) {
          pvVar10 = _pthread_getspecific((pthread_key_t)puVar12);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49a0();
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)((longlong)puVar7 + 0xc));
    }
    FUN_000be170();
    bVar4 = false;
    uVar15 = 0;
  }
  else {
    local_58 = -1;
    puVar14 = puVar8;
    while( true ) {
      lVar9 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) break;
      puVar14 = *(undefined8 **)(*(longlong *)(local_70 + 0x10) + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_70 + 0x10));
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        puVar14 = (undefined8 *)puVar14[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      FUN_01266fe0();
      local_38[0] = local_40[0];
      pcVar11 = local_40;
      if (local_40[0] == '\0') {
        pcVar11 = local_38;
      }
      *pcVar11 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40[0] = '\0';
        iVar6 = FUN_00d23d20();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == -1) {
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          iVar6 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 1;
          puVar14 = puVar8;
        }
        else {
          piVar1 = (int *)(puVar8[2] + (longlong)iVar6 * 4);
          *piVar1 = *piVar1 + 1;
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
    }
    puVar12 = local_70;
    FUN_001159b0();
    if (puVar7 != (undefined8 *)0x0) goto LAB_019c934d;
    uVar15 = (undefined7)((ulonglong)puVar14 >> 8);
    bVar4 = true;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  uVar13 = CONCAT71(uVar15,1);
  if (local_70 != (undefined *)0x0) {
    FUN_00d50b20();
  }
LAB_019c9497:
  return uVar13 & 0xffffffff;
}


