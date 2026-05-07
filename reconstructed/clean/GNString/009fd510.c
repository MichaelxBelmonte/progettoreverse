// Function: FUN_009fd510
// Address: 009fd510
// Size: 1411 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009fd510(int64_t param_1,int64_t param_2,void*param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t *arg1;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t this_ptr;
  uint64_t uVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t *plVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  
  lVar5 = *(int64_t *)(this_ptr + 8);
  lVar15 = *(int64_t *)(this_ptr + 0x10);
  uVar11 = *(uint64_t *)(this_ptr + 0x20);
  uVar13 = uVar11 >> 0xc;
  plVar3 = (int64_t *)(lVar5 + uVar13 * 8);
  lVar1 = lVar15 - lVar5;
  if (lVar1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (uint64_t)((uint)uVar11 & 0xfff) + *plVar3;
  }
  if (lVar10 == param_2) {
    uVar17 = 0;
  }
  else {
    uVar17 = (((((int64_t)arg1 - (int64_t)plVar3) * 0x200 + param_2) - lVar10) - *arg1)
             + *plVar3;
  }
  uVar18 = (int64_t)param_3 - param_1;
  lVar10 = *(int64_t *)(this_ptr + 0x28);
  if (uVar17 < lVar10 - uVar17) {
    if (uVar11 < uVar18) {
      FUN_00a15638();
      lVar5 = *(int64_t *)(this_ptr + 8);
      lVar15 = *(int64_t *)(this_ptr + 0x10);
      uVar11 = *(uint64_t *)(this_ptr + 0x20);
      uVar13 = uVar11 >> 0xc;
    }
    lVar10 = _UNK_023d4d48;
    lVar1 = g_023d4d40;
    plVar3 = (int64_t *)(lVar5 + uVar13 * 8);
    if (lVar15 == lVar5) {
      plVar14 = (int64_t *)0x0;
    }
    else {
      plVar14 = (int64_t *)((uint64_t)((uint)uVar11 & 0xfff) + *plVar3);
    }
    plVar8 = plVar14;
    plVar16 = plVar3;
    if (uVar17 <= uVar18 && uVar18 - uVar17 != 0) {
      lVar5 = (uVar18 - uVar17) + param_1;
      if (uVar17 < uVar18 >> 1) {
        lVar5 = (int64_t)param_3 - uVar17;
      }
      for (; uVar18 = uVar17, lVar5 != param_1; lVar5 = lVar5 + -1) {
        if (plVar8 == (int64_t *)*plVar16) {
          plVar8 = (int64_t *)(plVar16[-1] + 0x1000);
          plVar16 = plVar16 + -1;
        }
        *(void*)((int64_t)plVar8 + -1) = *(void*)(lVar5 + -1);
        *(int64_t *)(this_ptr + 0x20) = *(int64_t *)(this_ptr + 0x20) + lVar1;
        *(int64_t *)(this_ptr + 0x28) = *(int64_t *)(this_ptr + 0x28) + lVar10;
        plVar8 = (int64_t *)((int64_t)plVar8 + -1);
      }
    }
    lVar15 = _UNK_023d4d48;
    lVar5 = g_023d4d40;
    if (uVar18 != 0) {
      uVar11 = ((int64_t)plVar14 - *plVar3) + uVar18;
      if (uVar11 == 0 || SCARRY8((int64_t)plVar14 - *plVar3,uVar18) != (int64_t)uVar11 < 0) {
        uVar13 = 0xfff - uVar11;
        uVar11 = 0x1ffe - uVar11;
        if (-1 < (int64_t)uVar13) {
          uVar11 = uVar13;
        }
        plVar2 = plVar3 + -((int64_t)uVar11 >> 0xc);
        plVar12 = (int64_t *)(((uVar11 & 0xfffffffffffff000) - uVar13) + *plVar2 + 0xfff);
      }
      else {
        plVar2 = plVar3 + (uVar11 >> 0xc);
        plVar12 = (int64_t *)((uint64_t)((uint)uVar11 & 0xfff) + *plVar2);
      }
      for (; plVar12 != plVar14; plVar12 = (int64_t *)((int64_t)plVar12 + -1)) {
        if (plVar8 == (int64_t *)*plVar16) {
          plVar8 = (int64_t *)(plVar16[-1] + 0x1000);
          plVar16 = plVar16 + -1;
        }
        plVar8 = (int64_t *)((int64_t)plVar8 + -1);
        if (plVar12 == (int64_t *)*plVar2) {
          plVar12 = (int64_t *)(plVar2[-1] + 0x1000);
          plVar2 = plVar2 + -1;
        }
        *(void*)plVar8 = *(void*)((int64_t)plVar12 + -1);
        *(int64_t *)(this_ptr + 0x20) = *(int64_t *)(this_ptr + 0x20) + lVar5;
        *(int64_t *)(this_ptr + 0x28) = *(int64_t *)(this_ptr + 0x28) + lVar15;
      }
      if (uVar18 < uVar17) {
        uVar11 = ((int64_t)plVar14 - *plVar3) + uVar17;
        if (uVar11 == 0 || SCARRY8((int64_t)plVar14 - *plVar3,uVar17) != (int64_t)uVar11 < 0) {
          uVar13 = 0xfff - uVar11;
          uVar11 = 0x1ffe - uVar11;
          if (-1 < (int64_t)uVar13) {
            uVar11 = uVar13;
          }
          plVar14 = plVar3 + -((int64_t)uVar11 >> 0xc);
          lVar5 = ((uVar11 & 0xfffffffffffff000) - uVar13) + *plVar14 + 0xfff;
        }
        else {
          plVar14 = plVar3 + (uVar11 >> 0xc);
          lVar5 = (uint64_t)((uint)uVar11 & 0xfff) + *plVar14;
        }
        plVar3 = (int64_t *)FUN_009aa270(lVar5);
      }
      FUN_009fda9c(plVar14,plVar3,0);
    }
  }
  else {
    lVar4 = lVar1 * 0x200 + -1;
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    uVar11 = uVar11 + lVar10;
    if (lVar4 - uVar11 < uVar18) {
      FUN_009aa370();
      lVar10 = *(int64_t *)(this_ptr + 0x28);
      lVar5 = *(int64_t *)(this_ptr + 8);
      lVar15 = *(int64_t *)(this_ptr + 0x10);
      uVar11 = *(int64_t *)(this_ptr + 0x20) + lVar10;
    }
    plVar3 = (int64_t *)(lVar5 + (uVar11 >> 0xc) * 8);
    if (lVar15 == lVar5) {
      plVar14 = (int64_t *)0x0;
    }
    else {
      plVar14 = (int64_t *)((uint64_t)((uint)uVar11 & 0xfff) + *plVar3);
    }
    uVar17 = lVar10 - uVar17;
    plVar8 = plVar14;
    plVar16 = plVar3;
    if (uVar17 < uVar18) {
      puVar6 = param_3 + (uVar17 - uVar18);
      if (uVar17 < uVar18 >> 1) {
        puVar6 = (void*)(param_1 + uVar17);
      }
      for (; uVar18 = uVar17, puVar6 != param_3; puVar6 = puVar6 + 1) {
        *(void*)plVar8 = *puVar6;
        plVar8 = (int64_t *)((int64_t)plVar8 + 1);
        if ((int64_t)plVar8 - *plVar16 == 0x1000) {
          plVar8 = (int64_t *)plVar16[1];
          plVar16 = plVar16 + 1;
        }
        *(int64_t *)(this_ptr + 0x28) = *(int64_t *)(this_ptr + 0x28) + 1;
      }
    }
    if (uVar18 != 0) {
      puVar6 = (void*)((int64_t)plVar14 + (-uVar18 - *plVar3));
      if ((int64_t)puVar6 < 1) {
        uVar13 = 0xfff - (int64_t)puVar6;
        uVar11 = 0x1ffe - (int64_t)puVar6;
        if (-1 < (int64_t)uVar13) {
          uVar11 = uVar13;
        }
        plVar2 = plVar3 + -((int64_t)uVar11 >> 0xc);
        plVar12 = (int64_t *)(((uVar11 & 0xfffffffffffff000) - uVar13) + *plVar2 + 0xfff);
        plVar9 = plVar2;
        plVar7 = plVar12;
      }
      else {
        plVar2 = plVar3 + ((uint64_t)puVar6 >> 0xc);
        plVar12 = (int64_t *)((uint64_t)((uint)puVar6 & 0xfff) + *plVar2);
        plVar9 = plVar2;
        plVar7 = plVar12;
      }
      while (plVar14 != plVar12) {
        *(char *)plVar8 = (char)*plVar12;
        plVar8 = (int64_t *)((int64_t)plVar8 + 1);
        if ((int64_t)plVar8 - *plVar16 == 0x1000) {
          plVar8 = (int64_t *)plVar16[1];
          plVar16 = plVar16 + 1;
        }
        plVar12 = (int64_t *)((int64_t)plVar12 + 1);
        if ((int64_t)plVar12 - *plVar2 == 0x1000) {
          plVar12 = (int64_t *)plVar2[1];
          plVar2 = plVar2 + 1;
        }
        *(int64_t *)(this_ptr + 0x28) = *(int64_t *)(this_ptr + 0x28) + 1;
      }
      if (uVar18 < uVar17) {
        plVar3 = (int64_t *)FUN_009aaac0(plVar7,plVar9,plVar3);
        plVar14 = plVar9;
      }
      FUN_009aabc9(plVar14,plVar3,0);
    }
  }
  return;
}

