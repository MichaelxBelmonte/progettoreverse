// Function: FUN_00e484f0
// Address: 00e484f0
// Size: 1072 bytes
// Class: GNBKVA
// String references:
//   "object tried to encode key more than once!"


/* WARNING: Removing unreachable block (ram,0x00e48816) */
/* WARNING: Removing unreachable block (ram,0x00e4881f) */
/* WARNING: Removing unreachable block (ram,0x00e487ca) */
/* WARNING: Removing unreachable block (ram,0x00e48916) */
/* WARNING: Removing unreachable block (ram,0x00e48923) */
/* WARNING: Removing unreachable block (ram,0x00e4852d) */
/* WARNING: Removing unreachable block (ram,0x00e48536) */
/* WARNING: Removing unreachable block (ram,0x00e4859b) */
/* WARNING: Removing unreachable block (ram,0x00e485a4) */
/* WARNING: Removing unreachable block (ram,0x00e48612) */
/* WARNING: Removing unreachable block (ram,0x00e4861b) */
/* WARNING: Removing unreachable block (ram,0x00e4871c) */
/* WARNING: Removing unreachable block (ram,0x00e48728) */
/* WARNING: Removing unreachable block (ram,0x00e488ab) */
/* WARNING: Removing unreachable block (ram,0x00e48808) */
/* WARNING: Removing unreachable block (ram,0x00e48841) */
/* WARNING: Removing unreachable block (ram,0x00e488b7) */

void FUN_00e484f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar9;
  
  FUN_00e3a1c0();
  if (*(char *)(unaff_RDI + 0x2c) == '\0') {
    lVar8 = *(longlong *)(unaff_RDI + 0x60);
  }
  else {
    lVar8 = *(longlong *)(unaff_RDI + 0x48);
  }
  bVar3 = lVar8 == 0;
  if (bVar3) {
    lVar8 = 0;
  }
  else {
    FUN_00d50b00();
  }
  lVar1 = *param_2;
  iVar5 = FUN_00e3a2a0();
  iVar9 = 0;
  do {
    iVar6 = FUN_00d795b0();
    if (iVar6 <= iVar9) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_0258e990;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
      (*DAT_0258e9a8)();
      FUN_00e5d270();
      FUN_00d795e0();
      FUN_00d50b20();
LAB_00e48735:
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_00d79670();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar6 = FUN_00e5d8b0();
    lVar2 = DAT_027816e8;
    if (iVar6 == iVar5) {
      if (*(char *)(unaff_RDI + 0x2c) != '\0') {
        cVar4 = FUN_00e5d8c0();
        if (cVar4 == unaff_SIL) {
          FUN_00e5d8d0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          lVar2 = *(longlong *)(unaff_RDI + 0x40);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00e47c30();
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar1 == 0) {
            FUN_00c8e710();
            FUN_00c92170();
            FUN_00c92160();
            lVar2 = *(longlong *)(unaff_RDI + 0x40);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00e48c30();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          iVar9 = *(int *)(lVar1 + 0x18);
          FUN_00c8e340();
          *(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar9) = iVar5;
          FUN_00d50b20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00e48735;
      }
      if (DAT_027816e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while( true );
}


