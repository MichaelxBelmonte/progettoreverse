// Function: FUN_009e3592
// Address: 009e3592
// Size: 532 bytes
// Class: MUSpectrumShaper


undefined4 FUN_009e3592(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  
  lVar5 = FUN_00ace010();
  unaff_RDI[0x1a] = lVar5;
  unaff_RDI[0x1b] = lVar5 + 0xff8;
  *(undefined4 *)(lVar5 + 0xff8) = 0;
  *(undefined4 *)(unaff_RDI + 0x1c) = 0x400;
  unaff_RDI[0xd] = 0;
  if ((*(uint *)(unaff_RDI + 0xc) >> 9 & 1) == 0) {
    unaff_RDI[5] = unaff_RDI[3];
    unaff_RDI[7] = unaff_RDI[3];
    unaff_RDI[0xb] = *(longlong *)(*(longlong *)unaff_RDI[9] + 0x48);
    FUN_009e3b3c(unaff_RDI[4]);
    *(longlong *)(unaff_RDI[2] + 0x18) = unaff_RDI[3];
    plVar3 = *(longlong **)(unaff_RDI[9] + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    FUN_009e5ecc();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    uVar6 = *(uint *)(unaff_RDI + 0xc) | 0x200;
    *(uint *)(unaff_RDI + 0xc) = uVar6;
  }
  else {
    lVar5 = FUN_009e2686();
    lVar5 = *(longlong *)(lVar5 + 8);
    unaff_RDI[5] = lVar5;
    unaff_RDI[7] = lVar5;
    if (((*(byte *)((longlong)unaff_RDI + 0x61) & 8) == 0) && (lVar5 = FUN_009e3c78(), lVar5 == 0))
    {
      if (unaff_RDI[5] == unaff_RDI[4]) {
        uVar4 = 0;
        goto LAB_009e378c;
      }
      unaff_RDI[5] = unaff_RDI[5] + 1;
    }
    FUN_009e3b3c(unaff_RDI[4],unaff_RDI[7]);
    uVar6 = *(uint *)(unaff_RDI + 0xc);
  }
  if ((uVar6 >> 0x11 & 1) != 0) {
    FUN_009e3b3c(unaff_RDI[4],unaff_RDI[3]);
    *(longlong *)(*unaff_RDI + 0x18) = unaff_RDI[3];
  }
  FUN_00acdf70();
  uVar7 = 4;
  if ((*(byte *)((longlong)unaff_RDI + 0x61) & 0x10) == 0) {
    uVar7 = (ulonglong)*(uint *)(*(longlong *)unaff_RDI[9] + 0x50);
  }
  uVar4 = (**(code **)(&DAT_025240d0 + uVar7 * 0x10))();
LAB_009e378c:
  FUN_009e7f5c();
  return uVar4;
}


