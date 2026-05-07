// Function: FUN_009d508e
// Address: 009d508e
// Size: 974 bytes
// Class: Unknown
// String references:
//   "[^\\d.]+"

int64_t * FUN_009d508e(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int *piVar3;
  void *pvVar4;
  void*puVar5;
  code *pcVar6;
  uint32_t uVar7;
  char cVar8;
  void *pvVar9;
  byte *pbVar10;
  bad_cast *this;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int64_t *this_ptr;
  uint64_t uVar15;
  void *pvVar16;
  bool bVar17;
  uint64_t local_1f8;
  byte local_1e0;
  int64_t local_1b8;
  int64_t local_1b0;
  char local_1a8;
  byte local_1a0;
  byte local_178;
  byte local_160;
  byte local_138;
  byte local_120;
  byte local_e8;
  byte local_d0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  byte local_90;
  bad_cast local_8f [15];
  bad_cast *local_80;
  uint8_t local_78 [8];
  int64_t *local_70;
  byte local_68;
  int64_t local_50;
  void*local_48;
  uint32_t local_3c;
  
  this_ptr[2] = 0;
  this_ptr[1] = 0;
  *this_ptr = 0;
  FUN_009d5ffc(param_1,0);
  uVar15 = 0;
  FUN_009d55b7("",local_78);
  pbVar10 = (byte *)0x0;
  FUN_009f59a0(0,0);
  FUN_009ea1d0();
  FUN_009f5840();
  local_48 = &g_02524fc0;
  while( true ) {
    FUN_009f58f0();
    pvVar16 = (void *)CONCAT71((int7)((uint64_t)pbVar10 >> 8),local_1a8);
    if ((local_98 == '\0') || (local_1a8 == '\0')) {
      bVar17 = local_98 == local_1a8;
    }
    else if (local_a8 == local_1b8) {
      bVar17 = local_a0 == local_1b0;
    }
    else {
      bVar17 = false;
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(pvVar16);
    }
    if ((local_1e0 & 1) != 0) {
      operator_delete(pvVar16);
    }
    if ((local_1f8 & 1) != 0) {
      operator_delete(pvVar16);
    }
    if (bVar17) break;
    local_3c = 0;
    this = local_80;
    if ((local_90 & 1) == 0) {
      this = local_8f;
    }
    cVar8 = FUN_009e94a0();
    uVar7 = local_3c;
    if (cVar8 == '\0') {
      std::bad_cast::bad_cast(this);
      FUN_009af240();
                          pcVar6 = invalidInstructionException();
      (*pcVar6)();
    }
    puVar5 = (void*)this_ptr[1];
    if (puVar5 == (void*)this_ptr[2]) {
      lVar14 = *this_ptr;
      pvVar16 = (void *)((int64_t)puVar5 - lVar14);
      uVar1 = ((int64_t)pvVar16 >> 2) + 1;
      if (0x3fffffffffffffff < uVar1) {
                            std::__vector_base_common<true>::__throw_length_error();
      }
      lVar12 = this_ptr[2] - lVar14;
      uVar11 = lVar12 >> 2;
      uVar13 = lVar12 >> 1;
      if (uVar13 < uVar1) {
        uVar13 = uVar1;
      }
      if (0x1ffffffffffffffe < uVar11) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        local_50 = lVar14;
        if (0x3fffffffffffffff < uVar13) {
                              FUN_009d5f52();
        }
        pvVar9 = operator_new((ulong)uVar11);
        lVar14 = local_50;
      }
      pvVar4 = (void *)((int64_t)pvVar9 + uVar13 * 4);
      lVar12 = (int64_t)pvVar9 + ((int64_t)pvVar16 >> 2) * 4 + 4;
      *(void*)(lVar12 + -4) = uVar7;
      if (0 < (int64_t)pvVar16) {
        _memcpy(pvVar4,pvVar16,(size_t)uVar15);
      }
      *this_ptr = (int64_t)pvVar9;
      this_ptr[1] = lVar12;
      this_ptr[2] = (int64_t)pvVar4;
      if (lVar14 != 0) {
        operator_delete(pvVar4);
      }
    }
    else {
      *puVar5 = local_3c;
      this_ptr[1] = (int64_t)(puVar5 + 1);
    }
    pbVar10 = &local_90;
    local_98 = FUN_009f5a30(pbVar10,local_a0);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if ((local_160 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if ((local_178 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(pvVar16);
  }
  if (local_70 != (int64_t *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_70 + 0x10))();
      LOCK();
      piVar3 = (int *)((int64_t)local_70 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_70 + 0x18))();
      }
    }
  }
  return this_ptr;
}

