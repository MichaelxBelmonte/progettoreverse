// Function: FUN_009cffa0
// Address: 009cffa0
// Size: 1411 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cffa0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  ulonglong uVar11;
  longlong *plVar12;
  longlong unaff_RDI;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  lVar5 = *(longlong *)(unaff_RDI + 8);
  lVar15 = *(longlong *)(unaff_RDI + 0x10);
  uVar11 = *(ulonglong *)(unaff_RDI + 0x20);
  uVar13 = uVar11 >> 0xc;
  plVar3 = (longlong *)(lVar5 + uVar13 * 8);
  lVar1 = lVar15 - lVar5;
  if (lVar1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (ulonglong)((uint)uVar11 & 0xfff) + *plVar3;
  }
  if (lVar10 == param_2) {
    uVar17 = 0;
  }
  else {
    uVar17 = (((((longlong)unaff_RSI - (longlong)plVar3) * 0x200 + param_2) - lVar10) - *unaff_RSI)
             + *plVar3;
  }
  uVar18 = (longlong)param_3 - param_1;
  lVar10 = *(longlong *)(unaff_RDI + 0x28);
  if (uVar17 < lVar10 - uVar17) {
    if (uVar11 < uVar18) {
      FUN_00a15638();
      lVar5 = *(longlong *)(unaff_RDI + 8);
      lVar15 = *(longlong *)(unaff_RDI + 0x10);
      uVar11 = *(ulonglong *)(unaff_RDI + 0x20);
      uVar13 = uVar11 >> 0xc;
    }
    lVar10 = _UNK_023d4d48;
    lVar1 = _DAT_023d4d40;
    plVar3 = (longlong *)(lVar5 + uVar13 * 8);
    if (lVar15 == lVar5) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)((ulonglong)((uint)uVar11 & 0xfff) + *plVar3);
    }
    plVar8 = plVar14;
    plVar16 = plVar3;
    if (uVar17 <= uVar18 && uVar18 - uVar17 != 0) {
      lVar5 = (uVar18 - uVar17) + param_1;
      if (uVar17 < uVar18 >> 1) {
        lVar5 = (longlong)param_3 - uVar17;
      }
      for (; uVar18 = uVar17, lVar5 != param_1; lVar5 = lVar5 + -1) {
        if (plVar8 == (longlong *)*plVar16) {
          plVar8 = (longlong *)(plVar16[-1] + 0x1000);
          plVar16 = plVar16 + -1;
        }
        *(undefined1 *)((longlong)plVar8 + -1) = *(undefined1 *)(lVar5 + -1);
        *(longlong *)(unaff_RDI + 0x20) = *(longlong *)(unaff_RDI + 0x20) + lVar1;
        *(longlong *)(unaff_RDI + 0x28) = *(longlong *)(unaff_RDI + 0x28) + lVar10;
        plVar8 = (longlong *)((longlong)plVar8 + -1);
      }
    }
    lVar15 = _UNK_023d4d48;
    lVar5 = _DAT_023d4d40;
    if (uVar18 != 0) {
      uVar11 = ((longlong)plVar14 - *plVar3) + uVar18;
      if (uVar11 == 0 || SCARRY8((longlong)plVar14 - *plVar3,uVar18) != (longlong)uVar11 < 0) {
        uVar13 = 0xfff - uVar11;
        uVar11 = 0x1ffe - uVar11;
        if (-1 < (longlong)uVar13) {
          uVar11 = uVar13;
        }
        plVar2 = plVar3 + -((longlong)uVar11 >> 0xc);
        plVar12 = (longlong *)(((uVar11 & 0xfffffffffffff000) - uVar13) + *plVar2 + 0xfff);
      }
      else {
        plVar2 = plVar3 + (uVar11 >> 0xc);
        plVar12 = (longlong *)((ulonglong)((uint)uVar11 & 0xfff) + *plVar2);
      }
      for (; plVar12 != plVar14; plVar12 = (longlong *)((longlong)plVar12 + -1)) {
        if (plVar8 == (longlong *)*plVar16) {
          plVar8 = (longlong *)(plVar16[-1] + 0x1000);
          plVar16 = plVar16 + -1;
        }
        plVar8 = (longlong *)((longlong)plVar8 + -1);
        if (plVar12 == (longlong *)*plVar2) {
          plVar12 = (longlong *)(plVar2[-1] + 0x1000);
          plVar2 = plVar2 + -1;
        }
        *(undefined1 *)plVar8 = *(undefined1 *)((longlong)plVar12 + -1);
        *(longlong *)(unaff_RDI + 0x20) = *(longlong *)(unaff_RDI + 0x20) + lVar5;
        *(longlong *)(unaff_RDI + 0x28) = *(longlong *)(unaff_RDI + 0x28) + lVar15;
      }
      if (uVar18 < uVar17) {
        uVar11 = ((longlong)plVar14 - *plVar3) + uVar17;
        if (uVar11 == 0 || SCARRY8((longlong)plVar14 - *plVar3,uVar17) != (longlong)uVar11 < 0) {
          uVar13 = 0xfff - uVar11;
          uVar11 = 0x1ffe - uVar11;
          if (-1 < (longlong)uVar13) {
            uVar11 = uVar13;
          }
          plVar14 = plVar3 + -((longlong)uVar11 >> 0xc);
          lVar5 = ((uVar11 & 0xfffffffffffff000) - uVar13) + *plVar14 + 0xfff;
        }
        else {
          plVar14 = plVar3 + (uVar11 >> 0xc);
          lVar5 = (ulonglong)((uint)uVar11 & 0xfff) + *plVar14;
        }
        plVar3 = (longlong *)FUN_009aa270(lVar5);
      }
      FUN_00a15cc0(plVar14,plVar3,0);
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
      lVar10 = *(longlong *)(unaff_RDI + 0x28);
      lVar5 = *(longlong *)(unaff_RDI + 8);
      lVar15 = *(longlong *)(unaff_RDI + 0x10);
      uVar11 = *(longlong *)(unaff_RDI + 0x20) + lVar10;
    }
    plVar3 = (longlong *)(lVar5 + (uVar11 >> 0xc) * 8);
    if (lVar15 == lVar5) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)((ulonglong)((uint)uVar11 & 0xfff) + *plVar3);
    }
    uVar17 = lVar10 - uVar17;
    plVar8 = plVar14;
    plVar16 = plVar3;
    if (uVar17 < uVar18) {
      puVar6 = param_3 + (uVar17 - uVar18);
      if (uVar17 < uVar18 >> 1) {
        puVar6 = (undefined1 *)(param_1 + uVar17);
      }
      for (; uVar18 = uVar17, puVar6 != param_3; puVar6 = puVar6 + 1) {
        *(undefined1 *)plVar8 = *puVar6;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
        if ((longlong)plVar8 - *plVar16 == 0x1000) {
          plVar8 = (longlong *)plVar16[1];
          plVar16 = plVar16 + 1;
        }
        *(longlong *)(unaff_RDI + 0x28) = *(longlong *)(unaff_RDI + 0x28) + 1;
      }
    }
    if (uVar18 != 0) {
      puVar6 = (undefined1 *)((longlong)plVar14 + (-uVar18 - *plVar3));
      if ((longlong)puVar6 < 1) {
        uVar13 = 0xfff - (longlong)puVar6;
        uVar11 = 0x1ffe - (longlong)puVar6;
        if (-1 < (longlong)uVar13) {
          uVar11 = uVar13;
        }
        plVar2 = plVar3 + -((longlong)uVar11 >> 0xc);
        plVar12 = (longlong *)(((uVar11 & 0xfffffffffffff000) - uVar13) + *plVar2 + 0xfff);
        plVar9 = plVar2;
        plVar7 = plVar12;
      }
      else {
        plVar2 = plVar3 + ((ulonglong)puVar6 >> 0xc);
        plVar12 = (longlong *)((ulonglong)((uint)puVar6 & 0xfff) + *plVar2);
        plVar9 = plVar2;
        plVar7 = plVar12;
      }
      while (plVar14 != plVar12) {
        *(char *)plVar8 = (char)*plVar12;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
        if ((longlong)plVar8 - *plVar16 == 0x1000) {
          plVar8 = (longlong *)plVar16[1];
          plVar16 = plVar16 + 1;
        }
        plVar12 = (longlong *)((longlong)plVar12 + 1);
        if ((longlong)plVar12 - *plVar2 == 0x1000) {
          plVar12 = (longlong *)plVar2[1];
          plVar2 = plVar2 + 1;
        }
        *(longlong *)(unaff_RDI + 0x28) = *(longlong *)(unaff_RDI + 0x28) + 1;
      }
      if (uVar18 < uVar17) {
        plVar3 = (longlong *)FUN_009aaac0(plVar7,plVar9,plVar3);
        plVar14 = plVar9;
      }
      FUN_009d052f(plVar14,plVar3,0);
    }
  }
  return;
}


