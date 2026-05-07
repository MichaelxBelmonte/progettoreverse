// Function: FUN_00e55d80
// Address: 00e55d80
// Size: 633 bytes
// Class: GNCelemonyHTTPUploadRequest


/* WARNING: Removing unreachable block (ram,0x00e55fd2) */
/* WARNING: Removing unreachable block (ram,0x00e55fdf) */
/* WARNING: Removing unreachable block (ram,0x00e55df8) */
/* WARNING: Removing unreachable block (ram,0x00e55e01) */

undefined8 FUN_00e55d80(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong lVar5;
  int iVar6;
  int local_48;
  undefined4 uStack_44;
  char local_40;
  int local_34;
  
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_00d216c0();
  FUN_00d21370();
  FUN_00d227d0();
  FUN_00c8e710();
  lVar5 = CONCAT44(uStack_44,local_48);
  if ((local_40 == '\0') && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar4 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar4 == lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x70) = lVar5;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e439a0();
  lVar5 = *(longlong *)(unaff_RDI + 0x48);
  lVar4 = CONCAT44(uStack_44,local_48);
  if (lVar5 == lVar4) goto LAB_00e55eab;
  if (local_40 == '\0') {
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_00e55e69;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x48);
    *(longlong *)(unaff_RDI + 0x48) = CONCAT44(uStack_44,local_48);
    lVar4 = CONCAT44(uStack_44,local_48);
  }
  else {
    local_40 = '\0';
LAB_00e55e69:
    *(longlong *)(unaff_RDI + 0x48) = lVar4;
    lVar2 = lVar5;
  }
  lVar5 = lVar4;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = CONCAT44(uStack_44,local_48);
  }
LAB_00e55eab:
  if ((local_40 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (0 < local_34) {
    iVar6 = 0;
    do {
      cVar3 = FUN_00dab510();
      if (cVar3 == '\0') {
        return 0;
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x70);
      iVar1 = *(int *)(lVar5 + 0x18);
      FUN_00c8e340();
      *(int *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar1) = local_48;
      lVar5 = DAT_028a8c38;
      if (local_48 == -1) {
        FUN_00d21140();
      }
      else {
        if (DAT_028a8c38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((*(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) + (longlong)local_48 * 8) != 0)
           && (cVar3 = FUN_00e56ef0(), cVar3 != '\0')) {
          FUN_00e43ee0();
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_34);
  }
  return 1;
}


