// Function: FUN_000bd140
// Address: 000bd140
// Size: 890 bytes
// Class: MDMetaWindowController

void* FUN_000bd140(void* param_1)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  uint64_t uVar10;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  
  (**(code **)(**(int64_t **)(arg1 + 0x18) + 0xa00))();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_000bd1a3;
    }
  }
  else if (local_68 != 0) {
LAB_000bd1a3:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_68 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar1 = true;
    }
    else {
      lVar5 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific((void*)lVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar5 = local_68;
      }
      FUN_016c2660();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      plVar4 = (int64_t *)FUN_000bea40();
      (**(code **)(*plVar4 + 0x18))();
      pvVar2 = _pthread_getspecific((void*)lVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar5 = local_68;
      }
      dVar8 = (double)FUN_016c26c0(0);
      if (local_68 == 0) {
        *this_ptr = plVar4;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        if (0 < *(int *)(local_68 + 0xc)) {
          iVar7 = 0;
          do {
            pvVar2 = _pthread_getspecific((void*)lVar5);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_019079b0();
            dVar9 = (double)FUN_00e7c860();
            dVar9 = dVar9 * g_02391088;
            pvVar2 = _pthread_getspecific((void*)lVar5);
            plVar6 = plVar4;
            if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              plVar6 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
            pvVar2 = _pthread_getspecific((void*)lVar5);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01907950();
            (**(code **)(*plVar6 + 0x418))(uVar10,dVar9 + dVar8);
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(local_68 + 0xc));
        }
        FUN_000beb10();
        *this_ptr = plVar4;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    FUN_00d50b20();
    if (bVar1) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

