// Function: FUN_019da460
// Address: 019da460
// Size: 929 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019da4af) */
/* WARNING: Removing unreachable block (ram,0x019da4b8) */
/* WARNING: Removing unreachable block (ram,0x019da665) */
/* WARNING: Removing unreachable block (ram,0x019da66e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019da460(pthread_key_t param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float local_58;
  float local_54;
  longlong *local_48;
  char local_40;
  float local_38;
  float local_34;
  
  (**(code **)(*unaff_RDI + 0x9e0))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) {
    return;
  }
  uVar1 = *(uint *)((longlong)local_48 + 0xc);
  if (((ulonglong)uVar1 == 0) || ((int)uVar1 < 1)) goto LAB_019da7f3;
  local_34 = DAT_02391078;
  local_38 = DAT_02391074;
  uVar7 = 0;
  do {
    lVar5 = *(longlong *)(local_48[2] + uVar7 * 8);
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
  if ((local_34 == DAT_02391078) && (!NAN(local_34) && !NAN(DAT_02391078))) goto LAB_019da7f3;
  if ((local_38 == DAT_02391074) && (!NAN(local_38) && !NAN(DAT_02391074))) goto LAB_019da7f3;
  (**(code **)(*unaff_RDI + 0xa28))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_019da785;
    FUN_00d50b00();
LAB_019da673:
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar6 + 0x3a8))(local_34);
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    local_34 = (float)(**(code **)(*plVar6 + 0x3a0))();
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar6 + 0x3a8))(local_38);
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      local_48 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    local_38 = (float)(**(code **)(*local_48 + 0x3a0))();
    bVar2 = false;
  }
  else {
    if (local_48 != (longlong *)0x0) goto LAB_019da673;
LAB_019da785:
    bVar2 = true;
  }
  local_58 = local_34 + _DAT_0241b658;
  local_54 = (local_38 - local_34) + DAT_0241b65c;
  (**(code **)(*unaff_RDI + 0xa50))();
  (**(code **)(*unaff_RDI + 0xce0))(_DAT_023b3498,&local_58);
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_019da7f3:
  FUN_00d50b20();
  return;
}


