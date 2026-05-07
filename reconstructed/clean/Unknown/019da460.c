// Function: FUN_019da460
// Address: 019da460
// Size: 929 bytes
// Class: Unknown

void FUN_019da460(void* param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float local_58;
  float local_54;
  int64_t *local_48;
  char local_40;
  float local_38;
  float local_34;
  
  (**(code **)(*this_ptr + 0x9e0))();
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) {
    return;
  }
  uVar1 = *(uint *)((int64_t)local_48 + 0xc);
  if (((uint64_t)uVar1 == 0) || ((int)uVar1 < 1)) goto LAB_019da7f3;
  local_34 = g_02391078;
  local_38 = g_02391074;
  uVar7 = 0;
  do {
    lVar5 = *(int64_t *)(local_48[2] + uVar7 * 8);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_0126cd60();
    fVar9 = local_34;
    if (cVar3 == '\0') {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_01263cf0();
      if (cVar3 == '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_0125a2c0();
        if (!NAN(fVar8)) {
          fVar9 = fVar8;
          if (fVar8 <= local_38) {
            fVar9 = local_38;
          }
          local_38 = fVar9;
          fVar9 = fVar8;
          if (local_34 <= fVar8) {
            fVar9 = local_34;
          }
        }
      }
    }
    local_34 = fVar9;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    uVar7 = uVar7 + 1;
  } while (uVar1 != uVar7);
  if ((local_34 == g_02391078) && (!NAN(local_34) && !NAN(g_02391078))) goto LAB_019da7f3;
  if ((local_38 == g_02391074) && (!NAN(local_38) && !NAN(g_02391074))) goto LAB_019da7f3;
  (**(code **)(*this_ptr + 0xa28))();
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_019da785;
    FUN_00d50b00();
LAB_019da673:
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar6 + 0x3a8))(local_34);
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    local_34 = (float)(**(code **)(*plVar6 + 0x3a0))();
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar6 + 0x3a8))(local_38);
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      local_48 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    local_38 = (float)(**(code **)(*local_48 + 0x3a0))();
    bVar2 = false;
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_019da673;
LAB_019da785:
    bVar2 = true;
  }
  local_58 = local_34 + g_0241b658;
  local_54 = (local_38 - local_34) + g_0241b65c;
  (**(code **)(*this_ptr + 0xa50))();
  (**(code **)(*this_ptr + 0xce0))(g_023b3498,&local_58);
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_019da7f3:
  FUN_00d50b20();
  return;
}

