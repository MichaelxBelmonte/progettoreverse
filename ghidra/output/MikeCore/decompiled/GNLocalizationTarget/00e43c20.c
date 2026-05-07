// Function: FUN_00e43c20
// Address: 00e43c20
// Size: 551 bytes
// Class: GNLocalizationTarget


int FUN_00e43c20(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  longlong unaff_RDI;
  
  if (0 < *(int *)(unaff_RDI + 0x18)) {
    iVar6 = *(int *)(unaff_RDI + 0x18) + 0x1f >> 5;
    puVar5 = (uint *)((ulonglong)(iVar6 - 1) * 4 + *(longlong *)(unaff_RDI + 0x10));
    iVar4 = iVar6 << 5;
    do {
      iVar3 = iVar4 + -0x20;
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        if ((int)uVar1 < 0) {
          iVar6 = 0x1f;
        }
        else {
          iVar6 = 0x1e;
          if ((((((((uVar1 & 0x40000000) == 0) && (iVar6 = 0x1d, (uVar1 & 0x20000000) == 0)) &&
                 (iVar6 = 0x1c, (uVar1 & 0x10000000) == 0)) &&
                ((iVar6 = 0x1b, (uVar1 & 0x8000000) == 0 && (iVar6 = 0x1a, (uVar1 & 0x4000000) == 0)
                 ))) && (iVar6 = 0x19, (uVar1 & 0x2000000) == 0)) &&
              (((iVar6 = 0x18, (uVar1 & 0x1000000) == 0 && (iVar6 = 0x17, (uVar1 & 0x800000) == 0))
               && ((iVar6 = 0x16, (uVar1 & 0x400000) == 0 &&
                   (((iVar6 = 0x15, (uVar1 & 0x200000) == 0 &&
                     (iVar6 = 0x14, (uVar1 & 0x100000) == 0)) &&
                    (iVar6 = 0x13, (uVar1 & 0x80000) == 0)))))))) &&
             (((iVar6 = 0x12, (uVar1 & 0x40000) == 0 && (iVar6 = 0x11, (uVar1 & 0x20000) == 0)) &&
              (iVar6 = 0x10, (uVar1 & 0x10000) == 0)))) {
            if ((short)uVar1 < 0) {
              return iVar4 + -0x11;
            }
            iVar6 = 0xe;
            if (((((uVar1 & 0x4000) == 0) && (iVar6 = 0xd, (uVar1 & 0x2000) == 0)) &&
                ((iVar6 = 0xc, (uVar1 & 0x1000) == 0 &&
                 (((iVar6 = 0xb, (uVar1 & 0x800) == 0 && (iVar6 = 10, (uVar1 & 0x400) == 0)) &&
                  (iVar6 = 9, (uVar1 & 0x200) == 0)))))) && (iVar6 = 8, (uVar1 & 0x100) == 0)) {
              if ((char)uVar1 < '\0') {
                return iVar4 + -0x19;
              }
              iVar6 = 6;
              if (((((uVar1 & 0x40) == 0) && (iVar6 = 5, (uVar1 & 0x20) == 0)) &&
                  ((iVar6 = 4, (uVar1 & 0x10) == 0 &&
                   ((iVar6 = 3, (uVar1 & 8) == 0 && (iVar6 = 2, (uVar1 & 4) == 0)))))) &&
                 (iVar6 = 1, (uVar1 & 2) == 0)) {
                return ((uVar1 & 1) - 1) + iVar3;
              }
            }
          }
        }
        return iVar6 + iVar3;
      }
      puVar5 = puVar5 + -1;
      iVar7 = iVar6 + -1;
      bVar2 = 0 < iVar6;
      iVar6 = iVar7;
      iVar4 = iVar3;
    } while (iVar7 != 0 && bVar2);
  }
  return -1;
}


