// Function: FUN_015c9600
// Address: 015c9600
// Size: 626 bytes
// Class: MUSpectralTimeSlice


/* WARNING: Removing unreachable block (ram,0x015c975a) */
/* WARNING: Removing unreachable block (ram,0x015c9763) */
/* WARNING: Removing unreachable block (ram,0x015c96f6) */
/* WARNING: Removing unreachable block (ram,0x015c96ff) */
/* WARNING: Removing unreachable block (ram,0x015c96be) */
/* WARNING: Removing unreachable block (ram,0x015c96c7) */
/* WARNING: Removing unreachable block (ram,0x015c9726) */
/* WARNING: Removing unreachable block (ram,0x015c972f) */
/* WARNING: Removing unreachable block (ram,0x015c97d1) */
/* WARNING: Removing unreachable block (ram,0x015c97da) */

ulonglong FUN_015c9600(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  
  lVar10 = *(longlong *)(unaff_RDI + 0x38);
  if ((((lVar10 == 0) || (lVar2 = *(longlong *)(unaff_RDI + 0x18), lVar2 == 0)) ||
      (*(longlong *)(lVar2 + 0x38) == 0)) ||
     (((*(longlong *)(unaff_RDI + 0x30) == 0 || (*(longlong *)(lVar2 + 0x28) == 0)) ||
      (*(longlong *)(lVar2 + 0x30) == 0)))) {
    uVar11 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar10 = *(longlong *)(unaff_RDI + 0x38);
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x38);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d237a0();
    iVar6 = FUN_00d237a0();
    iVar7 = FUN_00d237a0();
    iVar8 = FUN_00d237a0();
    uVar12 = extraout_XMM0_Da;
    while (iVar9 = *(int *)(lVar10 + 0xc), iVar7 + 1 < iVar9) {
      uVar12 = FUN_00d23740();
    }
    if (0 < iVar8) {
      do {
        uVar12 = FUN_00d23620();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar9 = *(int *)(lVar10 + 0xc);
    }
    FUN_00d214d0(uVar12,iVar9);
    *(undefined8 *)(unaff_RDI + 0x30) =
         *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + (longlong)((iVar7 + 1 + iVar5) - iVar6) * 8)
    ;
    lVar4 = *(longlong *)(unaff_RDI + 0x18);
    *(undefined8 *)(unaff_RDI + 0x48) = *(undefined8 *)(lVar4 + 0x48);
    fVar1 = *(float *)(lVar4 + 0x54);
    if (*(float *)(unaff_RDI + 0x54) <= fVar1 && fVar1 != *(float *)(unaff_RDI + 0x54)) {
      *(float *)(unaff_RDI + 0x54) = fVar1;
    }
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(*(longlong *)(unaff_RDI + 0x18) + 0x20) = 0;
    *(undefined8 *)(unaff_RDI + 0x18) = 0;
    if (lVar2 != 0) {
      *(longlong *)(unaff_RDI + 0x18) = lVar2;
      *(longlong *)(lVar2 + 0x20) = unaff_RDI;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar11 & 0xffffffff;
}


