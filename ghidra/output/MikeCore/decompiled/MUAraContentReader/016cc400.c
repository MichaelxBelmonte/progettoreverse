// Function: FUN_016cc400
// Address: 016cc400
// Size: 623 bytes
// Class: MUAraContentReader


/* WARNING: Removing unreachable block (ram,0x016cc4df) */
/* WARNING: Removing unreachable block (ram,0x016cc4e8) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc5c1) */

void FUN_016cc400(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  int iVar10;
  longlong lVar12;
  char local_40;
  uint uVar11;
  
  uVar9 = unaff_RSI >> 0x20;
  if (uVar9 != 0) {
    puVar1 = (ulonglong *)(unaff_RDI + 0x70);
    uVar5 = *(ulonglong *)(unaff_RDI + 0x70);
    if (7 < *(int *)(uVar5 + 0x18)) {
      lVar12 = 1;
      iVar8 = 0;
      iVar10 = *(int *)(*(longlong *)(uVar5 + 0x10) + 4);
      uVar3 = uVar9;
      do {
        if ((iVar10 != 0) && ((int)uVar3 != 0)) {
          cVar4 = FUN_00e7c000();
          if (cVar4 != '\0') {
            if (iVar8 != -8) {
              return;
            }
            uVar5 = *puVar1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar10 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar6 >> 3 <= lVar12) break;
        uVar3 = unaff_RSI >> 0x20;
        iVar8 = iVar8 + 8;
        lVar12 = lVar12 + 1;
        iVar10 = *(int *)(*(longlong *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    if (uVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    if ((local_40 == '\0') && (unaff_RSI != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    uVar5 = *puVar1;
    uVar2 = *(uint *)(uVar5 + 0x18);
    pvVar7 = (void *)(ulonglong)uVar2;
    uVar11 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar11 = uVar2;
    }
    iVar10 = (int)uVar11 >> 3;
    if (7 < (int)uVar2) {
      lVar12 = 1;
      iVar8 = *(int *)(*(longlong *)(uVar5 + 0x10) + 4);
      do {
        if ((iVar8 != 0) && ((int)uVar9 != 0)) {
          cVar4 = FUN_00e7c020();
          if (cVar4 != '\0') {
            iVar10 = (int)lVar12 + -1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar8 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        pvVar7 = (void *)(longlong)(iVar6 >> 3);
        if ((longlong)pvVar7 <= lVar12) break;
        uVar9 = unaff_RSI >> 0x20;
        lVar12 = lVar12 + 1;
        iVar8 = *(int *)(*(longlong *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    iVar8 = *(int *)(unaff_RSI + 0x18);
    FUN_00c8e340();
    lVar12 = *(longlong *)(unaff_RSI + 0x10);
    _memmove(pvVar7,(void *)(longlong)(iVar8 + iVar10 * -8),param_3);
    *(ulonglong *)(lVar12 + (longlong)iVar10 * 8) = unaff_RSI;
    FUN_00d64850();
    uVar9 = *puVar1;
    if (uVar9 != unaff_RSI) {
      FUN_00d50b00();
      *puVar1 = unaff_RSI;
      if (uVar9 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
  }
  return;
}


