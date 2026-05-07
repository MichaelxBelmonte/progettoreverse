// Function: FUN_0036ef90
// Address: 0036ef90
// Size: 1266 bytes
// Class: MDMetaDocumentController
// String references:
//   "MDMetaDocumentController"

uint64_t FUN_0036ef90(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t local_98;
  char local_90;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_01f30840();
  iVar5 = *(int *)((int64_t)local_68 + 0xc);
  if (local_60 != '\0') {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    uVar8 = 1;
    goto LAB_0036f3ba;
  }
  FUN_01f30840();
  FUN_00d23310();
  local_38 = local_60 != '\0';
  local_40 = local_68;
  if ((bool)local_38) {
    local_60 = '\0';
  }
  if ((g_026fbe40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0271be08 = FUN_000838a0();
    g_0271bdf0 = "MDMetaDocumentController";
    g_0271bdf8 = 0x60;
    g_0271be00 = FUN_002a0ad0;
    g_0271be10 = 0;
    ram_000000000271be18 = 0;
    g_0271be20 = 0;
    g_0271be98 = 0;
    ram_000000000271bea0 = 0;
    g_0271bea8 = 0;
    g_0271beaa = 1;
    g_0271be28 = 0;
    ram_000000000271be30 = 0;
    g_0271be38 = 0;
    ram_000000000271be40 = 0;
    g_0271be48 = 0;
    ram_000000000271be50 = 0;
    g_0271be58 = 0;
    ram_000000000271be60 = 0;
    g_0271be68 = 0;
    ram_000000000271be70 = 0;
    g_0271be78 = 0;
    ram_000000000271be80 = 0;
    g_0271be88 = 0;
    ram_000000000271be90 = 0;
    g_0271beb3 = 0;
    g_0271beab = 0;
    ___cxa_guard_release();
  }
  if (local_68 == (int64_t *)0x0) {
LAB_0036f05d:
    pplVar6 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802690 != '\0') goto LAB_0036f06d;
LAB_0036f080:
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*local_68 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0036f05d;
    pplVar6 = &local_40;
    plVar9 = local_40;
    if (local_38 == '\0') goto LAB_0036f080;
LAB_0036f06d:
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*plVar9 + 0x618))();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0036f136;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_0036f136:
    local_50 = -1;
    while( true ) {
      lVar10 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_68 + 0xc) <= local_50) break;
      plVar1 = *(int64_t **)(local_68[2] + 8 + lVar10 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x478))();
      if (cVar4 != '\0') {
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002b3090();
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)puVar7 + 0xc) < 1) {
LAB_0036f3a2:
    uVar8 = CONCAT71((int7)((uint64_t)puVar7 >> 8),1);
  }
  else {
    if (*(int *)((int64_t)puVar7 + 0xc) == 1) {
LAB_0036f234:
      if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
        lVar10 = 0;
        do {
          plVar1 = *(int64_t **)(puVar7[2] + lVar10 * 8);
          (**(code **)(*plVar1 + 0x4c8))();
          FUN_01f27fe0();
          iVar5 = (**(code **)(*local_40 + 0x5b8))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar5 == 0) {
            (**(code **)(*plVar1 + 0x498))();
            plVar3 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0036f350;
              }
LAB_0036f361:
              bVar2 = true;
            }
            else {
              if (local_40 == (int64_t *)0x0) goto LAB_0036f361;
LAB_0036f350:
              bVar2 = false;
              FUN_00cafd20();
            }
            (**(code **)(*plVar1 + 0x4f8))();
            if (!bVar2) {
              (**(code **)(*plVar3 + 0x3c8))();
              FUN_00d50b20();
            }
          }
          else if (iVar5 == 1) {
            FUN_002b3090();
            goto LAB_0036f3d4;
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < *(int *)((int64_t)puVar7 + 0xc));
      }
      FUN_002b3090();
      goto LAB_0036f3a2;
    }
    iVar5 = (**(code **)(*this_ptr + 0x5c8))();
    if (iVar5 != 1) {
      if (iVar5 != 0) goto LAB_0036f3a2;
      goto LAB_0036f234;
    }
LAB_0036f3d4:
    uVar8 = 0;
  }
  FUN_00d50b20();
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0036f3ba:
  return uVar8 & 0xffffffff;
}

