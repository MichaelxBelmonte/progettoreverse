// Function: FUN_000c6250
// Address: 000c6250
// Size: 615 bytes
// Class: GNRootView
// String references:
//   "Melodyne #%I"

void* FUN_000c6250(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  bVar4 = false;
  do {
    FUN_00d8cb40();
    if (local_40 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
    }
    else {
      bVar4 = true;
      plVar8 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (*(int64_t *)(arg1 + 0x168) != 0) {
      lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x168) + 0x10);
      pVar7 = *(void* *)(lVar2 + 0xc);
      if (0 < (int)pVar7) {
        lVar9 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar9 * 8);
          if ((*(int64_t *)(lVar3 + 0x308) == 0) && (*param_2 != lVar3)) {
            FUN_0051be00();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6000();
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            cVar5 = (**(code **)(*plVar8 + 0x50))();
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar5 != '\0') {
              if (bVar4) {
                FUN_00d50b20();
                bVar4 = false;
                plVar8 = (int64_t *)0x0;
              }
              else {
                bVar4 = false;
                plVar8 = (int64_t *)0x0;
              }
              break;
            }
            pVar7 = *(void* *)(lVar2 + 0xc);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)pVar7);
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *this_ptr = plVar8;
      *(void*)(this_ptr + 1) = 1;
      (**(code **)(*plVar1 + 0x378))();
      return this_ptr;
    }
  } while( true );
}

