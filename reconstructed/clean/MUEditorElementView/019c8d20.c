// Function: FUN_019c8d20
// Address: 019c8d20
// Size: 1894 bytes
// Class: MUEditorElementView

uint64_t FUN_019c8d20(char param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  char *pcVar11;
  void*puVar12;
  uint64_t uVar13;
  void*puVar14;
  undefined7 uVar15;
  int64_t *this_ptr;
  void*local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar13 = 0;
  cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar5 == '\0') goto LAB_019c9497;
  (**(code **)(*this_ptr + 0xe30))();
  iVar6 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  uVar3 = (uint3)((uint)iVar6 >> 8);
  uVar13 = (uint64_t)CONCAT31(uVar3,iVar6 != 0);
  if ((iVar6 == 0) || (param_2 == '\0')) goto LAB_019c9497;
  (**(code **)(*this_ptr + 0xf40))();
  (**(code **)(*this_ptr + 0xf68))();
  (**(code **)(*this_ptr + 0xf70))();
  (**(code **)(*this_ptr + 0xf78))();
  (**(code **)(*this_ptr + 0xf80))();
  (**(code **)(*this_ptr + 0xf88))();
  (**(code **)(*this_ptr + 0xf90))();
  (**(code **)(*this_ptr + 0xf98))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *this_ptr))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *this_ptr + 8))();
  if (param_1 == '\0') {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *this_ptr + 0x10))();
    cVar5 = FUN_019c98c0();
    uVar13 = CONCAT71((uint7)uVar3,1);
    if (cVar5 == '\0') goto LAB_019c9497;
  }
  else {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *this_ptr + 0x18))();
  }
  (**(code **)(*this_ptr + 0xe30))();
  if ((local_68 == '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b00();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &g_025683c0;
  *puVar8 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (local_70 == (void*)0x0) {
LAB_019c934d:
    if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
      lVar9 = 0;
      do {
        pvVar10 = _pthread_getspecific((void*)puVar12);
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
          pvVar10 = _pthread_getspecific((void*)puVar12);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49a0();
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)((int64_t)puVar7 + 0xc));
    }
    FUN_000be170();
    bVar4 = false;
    uVar15 = 0;
  }
  else {
    local_58 = -1;
    puVar14 = puVar8;
    while( true ) {
      lVar9 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) break;
      puVar14 = *(void**)(*(int64_t *)(local_70 + 0x10) + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((void*)*(int64_t *)(local_70 + 0x10));
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        puVar14 = (void*)puVar14[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
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
          *(void*)(puVar8[2] + (int64_t)iVar6) = 1;
          puVar14 = puVar8;
        }
        else {
          piVar1 = (int *)(puVar8[2] + (int64_t)iVar6 * 4);
          *piVar1 = *piVar1 + 1;
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
    }
    puVar12 = local_70;
    FUN_001159b0();
    if (puVar7 != (void*)0x0) goto LAB_019c934d;
    uVar15 = (undefined7)((uint64_t)puVar14 >> 8);
    bVar4 = true;
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  uVar13 = CONCAT71(uVar15,1);
  if (local_70 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_019c9497:
  return uVar13 & 0xffffffff;
}

