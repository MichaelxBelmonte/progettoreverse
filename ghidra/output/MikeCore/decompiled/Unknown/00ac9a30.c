// Function: FUN_00ac9a30
// Address: 00ac9a30
// Size: 507 bytes
// Class: Unknown


int FUN_00ac9a30(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  bool bVar8;
  longlong unaff_RSI;
  byte *unaff_RDI;
  size_t sVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  void *pvVar14;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x18);
  lVar11 = *(longlong *)(unaff_RDI + 0x20);
  lVar5 = *(longlong *)(unaff_RSI + 0x18);
  lVar10 = *(longlong *)(unaff_RSI + 0x20);
  lVar12 = lVar11;
  if ((lVar4 != lVar5) || (lVar6 = lVar4, lVar11 != lVar10)) {
    if (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_1 + 0x18)) goto LAB_00ac9bd1;
    do {
      do {
        sVar9 = (size_t)lVar10;
        bVar1 = *param_2;
        if ((bVar1 & 1) == 0) {
          pvVar13 = (void *)(ulonglong)(bVar1 >> 1);
          bVar2 = *unaff_RDI;
          if ((bVar2 & 1) == 0) goto LAB_00ac9ab5;
LAB_00ac9ace:
          pvVar14 = *(void **)(unaff_RDI + 8);
        }
        else {
          pvVar13 = *(void **)(param_2 + 8);
          bVar2 = *unaff_RDI;
          if ((bVar2 & 1) != 0) goto LAB_00ac9ace;
LAB_00ac9ab5:
          pvVar14 = (void *)(ulonglong)(bVar2 >> 1);
        }
        pvVar7 = pvVar14;
        if (pvVar13 < pvVar14) {
          pvVar7 = pvVar13;
        }
        if (pvVar7 == (void *)0x0) {
LAB_00ac9b30:
          if (pvVar14 < pvVar13) {
            return -1;
          }
          if (pvVar7 != (void *)0x0) goto LAB_00ac9b60;
LAB_00ac9b80:
          if (pvVar13 < pvVar14) {
            return 1;
          }
        }
        else {
          iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar7,sVar9);
          if (iVar3 == 0) goto LAB_00ac9b30;
          if (iVar3 < 0) {
            return -1;
          }
LAB_00ac9b60:
          iVar3 = _memcmp((void *)(ulonglong)bVar1,pvVar7,sVar9);
          if (iVar3 == 0) goto LAB_00ac9b80;
          if (iVar3 < 0) {
            return 1;
          }
        }
        FUN_00acb370();
        FUN_00acb370();
        lVar4 = *(longlong *)(unaff_RDI + 0x18);
        lVar11 = *(longlong *)(unaff_RDI + 0x20);
        lVar5 = *(longlong *)(unaff_RSI + 0x18);
        lVar10 = *(longlong *)(unaff_RSI + 0x20);
        lVar12 = lVar11;
        if ((lVar4 == lVar5) && (lVar6 = lVar4, lVar11 == lVar10)) goto LAB_00ac9bdf;
      } while (*(longlong *)(param_2 + 0x18) != *(longlong *)(param_1 + 0x18));
LAB_00ac9bd1:
      lVar11 = lVar10;
      lVar6 = lVar5;
      lVar10 = lVar11;
    } while (*(longlong *)(param_2 + 0x20) != *(longlong *)(param_1 + 0x20));
  }
LAB_00ac9bdf:
  if (((lVar4 != lVar6 || lVar12 != lVar11) ||
      (*(longlong *)(param_2 + 0x18) != *(longlong *)(param_1 + 0x18))) ||
     (iVar3 = 0, *(longlong *)(param_2 + 0x20) != *(longlong *)(param_1 + 0x20))) {
    bVar8 = lVar4 != lVar6 || lVar12 != lVar11;
    iVar3 = (bVar8 - 1) + (uint)bVar8;
  }
  return iVar3;
}


