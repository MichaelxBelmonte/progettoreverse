// Function: FUN_002ee280
// Address: 002ee280
// Size: 863 bytes
// Class: MDMetaWindowController

void* FUN_002ee280(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t **pplVar7;
  void*this_ptr;
  int iVar8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  FUN_01beea30();
  if (local_a8 == '\0') {
    if (local_b0 == 0) goto LAB_002ee5ec;
    FUN_00d50b00();
  }
  else if (local_b0 == 0) goto LAB_002ee5ec;
  if (0 < *(int *)(local_b0 + 0xc)) {
    iVar8 = 0;
    do {
      lVar2 = local_78;
      FUN_01bc0990();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
          goto LAB_002ee400;
        }
      }
      else if (local_78 != 0) {
LAB_002ee400:
        local_70 = '\0';
        local_78 = 0;
        local_60 = -1;
        while( true ) {
          lVar5 = (int64_t)local_60;
          local_60 = local_60 + 1;
          if (*(int *)(lVar2 + 0xc) <= local_60) break;
          local_78 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar5 * 8);
          FUN_01bc60e0();
          plVar1 = local_48;
          FUN_000823a0();
          pplVar7 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar7 = &local_48;
            if (cVar3 == '\0') {
              pplVar7 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar7;
          local_38[0] = *(char *)(pplVar7 + 1);
          pplVar7 = pplVar7 + 1;
          if (local_38[0] == '\0') {
            pplVar7 = (int64_t **)local_38;
          }
          *(void*)pplVar7 = 0;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            pvVar6 = _pthread_getspecific((void*)pplVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            if (local_80 == '\0') {
              if (local_88 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_48 = local_88;
            local_40 = '\0';
            FUN_00d214d0();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_88 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
          }
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(local_b0 + 0xc));
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002ee5ec:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

