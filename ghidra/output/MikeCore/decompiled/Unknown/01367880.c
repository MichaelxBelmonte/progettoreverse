// Function: FUN_01367880
// Address: 01367880
// Size: 852 bytes
// Class: Unknown


undefined8 * FUN_01367880(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  int local_50;
  longlong *local_48;
  
  lVar7 = *(longlong *)(unaff_RSI + 0xd0);
  if (*(int *)(lVar7 + 0xc) < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    iVar13 = 100000;
    lVar12 = 0;
    plVar14 = (longlong *)0x0;
    bVar1 = false;
    local_48 = (longlong *)0x0;
    lVar8 = 0;
    bVar3 = false;
    do {
      pVar9 = (pthread_key_t)lVar8;
      plVar10 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar12 * 8);
      if (plVar14 == plVar10) {
        if ((!bVar1) && (plVar14 != (longlong *)0x0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar1 = true;
          plVar14 = plVar10;
        }
        else {
          bVar1 = true;
          plVar14 = plVar10;
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      plVar10 = plVar14;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar10 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      lVar7 = (**(code **)(*plVar10 + 0x380))();
      plVar10 = local_48;
      bVar2 = bVar3;
      if (lVar7 < param_2) {
        pvVar6 = _pthread_getspecific(pVar9);
        plVar11 = plVar14;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar11 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        lVar7 = (**(code **)(*plVar11 + 0x380))();
        pvVar6 = _pthread_getspecific(pVar9);
        plVar11 = plVar14;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar11 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar11 + 0x388))();
        if (param_2 < lVar8 + lVar7) {
          pvVar6 = _pthread_getspecific(pVar9);
          plVar11 = plVar14;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          iVar4 = (**(code **)(*plVar11 + 0x380))();
          pvVar6 = _pthread_getspecific(pVar9);
          plVar11 = plVar14;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          iVar5 = (**(code **)(*plVar11 + 0x390))();
          local_50 = (int)param_2;
          iVar5 = iVar5 + (iVar4 - local_50);
          iVar4 = -iVar5;
          if (0 < iVar5) {
            iVar4 = iVar5;
          }
          if (iVar4 < iVar13) {
            iVar13 = iVar4;
            if (local_48 == plVar14) {
              if (((bVar1) && (!bVar3)) && (plVar14 != (longlong *)0x0)) {
                FUN_00d50b00();
                bVar2 = true;
              }
            }
            else {
              if ((bVar1) && (plVar14 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              plVar10 = plVar14;
              bVar2 = bVar1;
              if ((bVar3) && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      local_48 = plVar10;
      lVar12 = lVar12 + 1;
      lVar7 = *(longlong *)(unaff_RSI + 0xd0);
      lVar8 = (longlong)*(int *)(lVar7 + 0xc);
      bVar3 = bVar2;
    } while (lVar12 < lVar8);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar2) {
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else if (local_48 == (longlong *)0x0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    if ((bVar1) && (plVar14 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


