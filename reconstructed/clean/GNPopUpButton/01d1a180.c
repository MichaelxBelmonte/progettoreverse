// Function: FUN_01d1a180
// Address: 01d1a180
// Size: 1506 bytes
// Class: GNPopUpButton

void FUN_01d1a180(void)

{
  byte bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar4 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar10 = (int64_t *)0x0;
joined_r0x01d1a1cf:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      plVar10 = plVar4;
      goto joined_r0x01d1a1cf;
    }
  }
  lVar3 = g_027057d0;
  if (plVar10 == (int64_t *)0x0) {
    return;
  }
  if (g_027057d0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar8 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar1 = 1;
    plVar8 = (int64_t *)0x0;
    bVar2 = false;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = 0;
      bVar2 = true;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01d1a276;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar2 = true;
    bVar1 = 0;
  }
LAB_01d1a276:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027057d0;
  if (plVar8 != (int64_t *)0x0) {
    if (g_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_40;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar9 = local_40;
    FUN_00053ac0();
    if (plVar9 == (int64_t *)0x0) {
LAB_01d1a308:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1a308;
    }
    plVar9 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
LAB_01d1a373:
      uVar6 = 0;
    }
    else {
      cVar5 = FUN_00d45ad0();
      uVar6 = 1;
      if (cVar5 == '\0') goto LAB_01d1a373;
    }
    (**(code **)(*plVar10 + 0x998))(uVar6);
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar9 = local_40;
  if (local_40 == plVar8) {
    plVar9 = plVar8;
    if ((bool)(bVar1 & local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01d1a40c;
      bVar2 = true;
      FUN_00d50b00();
    }
LAB_01d1a476:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
      bVar2 = true;
      if (bVar11) {
        FUN_00d50b20();
      }
      goto LAB_01d1a476;
    }
    bVar11 = plVar8 != (int64_t *)0x0;
    plVar8 = plVar9;
    if ((bool)(bVar2 & bVar11)) {
      FUN_00d50b20();
    }
LAB_01d1a40c:
    local_38 = '\0';
    bVar2 = true;
    plVar9 = plVar8;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) goto LAB_01d1a742;
  (**(code **)(*plVar9 + 0x3f8))();
  if (local_40 == (int64_t *)0x0) {
    bVar11 = true;
  }
  else {
    (**(code **)(*plVar9 + 0x3f8))();
    bVar11 = *(int *)(local_80 + 0xc) == 0;
    if (local_78 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027e7c20;
  if (bVar11) {
    (**(code **)(*plVar10 + 0x978))();
  }
  else {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x4c8))();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
LAB_01d1a6f2:
      (**(code **)(*plVar10 + 0x978))();
      if (plVar8 == (int64_t *)0x0) goto LAB_01d1a734;
    }
    else {
      (**(code **)(*plVar10 + 0x980))();
      if (local_40 == (int64_t *)0x0) {
        cVar5 = '\0';
      }
      else {
        (**(code **)(*plVar10 + 0x980))();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        cVar5 = (**(code **)(*plVar8 + 0x50))();
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01d1a6f2;
    }
    FUN_00d50b20();
  }
LAB_01d1a734:
  if (bVar2) {
    FUN_00d50b20();
  }
LAB_01d1a742:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

