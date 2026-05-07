// Function: FUN_0171f300
// Address: 0171f300
// Size: 1135 bytes
// Class: Unknown


undefined8 * FUN_0171f300(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint unaff_ESI;
  int iVar12;
  undefined8 *unaff_RDI;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  longlong local_40;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  iVar3 = FUN_013ff610();
  lVar10 = 0;
  do {
    uVar4 = (uint)(*(ulonglong *)(*param_2 + 0x18) >> ((char)lVar10 * '\x04' & 0x3fU)) & 0xf;
    if (uVar4 == 0xf) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 == unaff_ESI) {
      uVar5 = iVar3 - (int)lVar10;
      uVar4 = -uVar5;
      if (0 < (int)uVar5) {
        uVar4 = uVar5;
      }
      pvVar8 = (void *)(ulonglong)uVar4;
      iVar1 = *(int *)(puVar7 + 3);
      lVar13 = (longlong)iVar1;
      iVar12 = iVar1 + 3;
      if (-1 < lVar13) {
        iVar12 = iVar1;
      }
      lVar15 = 4;
      lVar14 = 0;
      do {
        if (iVar12 >> 2 <= (int)lVar14) {
          iVar1 = *(int *)(puVar7 + 3);
          FUN_00c8e340(pvVar8,1);
          piVar16 = (int *)((longlong)iVar1 + puVar7[2]);
          goto LAB_0171f390;
        }
        uVar9 = iVar3 - *(int *)(puVar7[2] + lVar14 * 4);
        uVar5 = -uVar9;
        if (0 < (int)uVar9) {
          uVar5 = uVar9;
        }
        lVar15 = lVar15 + -4;
        lVar14 = lVar14 + 1;
      } while (uVar5 < uVar4);
      lVar14 = lVar13;
      FUN_00c8e340(pvVar8,1);
      piVar16 = (int *)(puVar7[2] - lVar15);
      _memmove(pvVar8,(void *)(lVar13 + lVar15),(size_t)lVar14);
LAB_0171f390:
      *piVar16 = (int)lVar10;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0xc);
  if ((*(uint *)(puVar7 + 3) & 0xfffffffc) == 4) {
    iVar1 = *(int *)puVar7[2];
    lVar10 = *param_2;
    if (iVar3 == iVar1) {
      if ((lVar10 != 0) && (*param_1 != 0)) {
        uVar5 = (uint)(*(ulonglong *)(lVar10 + 0x18) >> ((byte)(iVar3 << 2) & 0x3f)) & 0xf;
        uVar4 = 0xffffffff;
        if (uVar5 != 0xf) {
          uVar4 = uVar5;
        }
        FUN_01715d40(iVar3 << 2,uVar4);
        FUN_017163c0();
      }
      FUN_0171ef10();
      goto LAB_0171f770;
    }
    if ((lVar10 != 0) && (*param_3 != 0)) {
      if ((unaff_ESI < 0xd) && ((0x1500U >> (unaff_ESI & 0x1f) & 1) != 0)) {
        uVar5 = (uint)(*(ulonglong *)(lVar10 + 0x18) >> ((byte)(iVar1 * 4) & 0x3f)) & 0xf;
        uVar4 = 0xffffffff;
        if (uVar5 != 0xf) {
          uVar4 = uVar5;
        }
        FUN_01715d40(iVar1 * 4,uVar4);
        FUN_017163c0();
      }
      else {
        uVar5 = (uint)(*(ulonglong *)(lVar10 + 0x18) >> ((byte)(iVar1 * 4) & 0x3f)) & 0xf;
        uVar4 = 0xffffffff;
        if (uVar5 != 0xf) {
          uVar4 = uVar5;
        }
        FUN_01715d40(iVar1 * 4,uVar4);
        FUN_017163c0();
      }
    }
  }
  else if (7 < (int)*(uint *)(puVar7 + 3)) {
    local_40 = *param_3;
    iVar1 = *(int *)puVar7[2];
    if (iVar3 == iVar1) {
      uVar4 = 1;
LAB_0171f532:
      uVar5 = uVar4;
      cVar2 = '\0';
    }
    else {
      lVar10 = *param_4;
      cVar2 = (char)param_4[1];
      if (local_40 == lVar10) {
        uVar5 = 0;
        uVar4 = 0;
        if (cVar2 == '\0') goto LAB_0171f532;
        cVar2 = '\0';
        if (local_40 != 0) {
          uVar5 = 0;
          cVar2 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if ((cVar2 != '\0') && (lVar10 != 0)) {
          FUN_00d50b00();
        }
        uVar5 = 0;
        local_40 = lVar10;
      }
    }
    iVar12 = *(int *)(puVar7 + 3);
    iVar6 = iVar12 + 3;
    if (-1 < iVar12) {
      iVar6 = iVar12;
    }
    if ((int)uVar5 < iVar6 >> 2) {
      uVar11 = (ulonglong)uVar5;
      do {
        if ((*param_2 != 0) && (local_40 != 0)) {
          iVar12 = *(int *)(puVar7[2] + uVar11 * 4) * 4;
          uVar5 = (uint)(*(ulonglong *)(*param_2 + 0x18) >> ((byte)iVar12 & 0x3f)) & 0xf;
          uVar4 = 0xffffffff;
          if (uVar5 != 0xf) {
            uVar4 = uVar5;
          }
          FUN_01715d40(iVar12,uVar4);
          FUN_017163c0();
          iVar12 = *(int *)(puVar7 + 3);
        }
        uVar11 = uVar11 + 1;
        iVar6 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar6 = iVar12;
        }
      } while ((longlong)uVar11 < (longlong)(iVar6 >> 2));
    }
    if (iVar3 == iVar1) {
      if ((*param_2 != 0) && (local_40 != 0)) {
        uVar5 = (uint)(*(ulonglong *)(*param_2 + 0x18) >> ((byte)(*(int *)puVar7[2] * 4) & 0x3f)) &
                0xf;
        uVar4 = 0xffffffff;
        if (uVar5 != 0xf) {
          uVar4 = uVar5;
        }
        FUN_01715d40(*(int *)puVar7[2] * 4,uVar4);
        FUN_017163c0();
      }
      FUN_0171ef10();
      if ((cVar2 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0171f770;
    }
    if ((cVar2 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0171f770:
  FUN_00d50b20();
  return unaff_RDI;
}


