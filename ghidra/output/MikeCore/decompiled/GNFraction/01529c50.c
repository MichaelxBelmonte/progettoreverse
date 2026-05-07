// Function: FUN_01529c50
// Address: 01529c50
// Size: 729 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x01529f03) */
/* WARNING: Removing unreachable block (ram,0x01529f10) */
/* WARNING: Removing unreachable block (ram,0x01529db7) */
/* WARNING: Removing unreachable block (ram,0x01529dc0) */
/* WARNING: Removing unreachable block (ram,0x01529e07) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e09) */
/* WARNING: Removing unreachable block (ram,0x01529e32) */

undefined8 * FUN_01529c50(double param_1,double param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar13;
  longlong local_58;
  char local_50;
  int local_40;
  
  pcVar4 = DAT_02572370;
  if (*(char *)(unaff_RSI + 0x38) == '\0') {
LAB_01529cad:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    uVar11 = (uint)(param_1 / (double)*(int *)(unaff_RSI + 0x3c) +
                   (double)*(int *)(unaff_RSI + 0x40));
    uVar7 = 0;
    if (-1 < (int)uVar11) {
      uVar7 = uVar11;
    }
    iVar12 = (int)((param_1 + param_2) / (double)*(int *)(unaff_RSI + 0x3c) +
                  (double)*(int *)(unaff_RSI + 0x40));
    if (iVar12 < (int)uVar7) goto LAB_01529cad;
    uVar13 = (ulonglong)uVar7;
    puVar10 = (undefined8 *)0x0;
    bVar3 = false;
    do {
      lVar5 = local_58;
      pVar1 = *(pthread_key_t *)(*(longlong *)(unaff_RSI + 0x48) + 0xc);
      if ((longlong)(int)pVar1 <= (longlong)uVar13) break;
      pvVar8 = _pthread_getspecific(pVar1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_01529dd0;
        }
      }
      else if (local_58 != 0) {
LAB_01529dd0:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar9 = (longlong)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_40) break;
          lVar2 = *(longlong *)(lVar5 + 0x10);
          local_58 = *(longlong *)(lVar2 + 8 + lVar9 * 8);
          pvVar8 = _pthread_getspecific((pthread_key_t)lVar2);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_01275530(param_1,param_2);
          if (cVar6 != '\0') {
            if (puVar10 == (undefined8 *)0x0) {
              puVar10 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar10 = &DAT_02572358;
              (*pcVar4)();
              bVar3 = true;
            }
            FUN_00d24b60(0,FUN_012e8c90,1);
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != iVar12 + 1);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar3) goto LAB_01529f3e;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_01529f3e;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_01529f3e:
  *unaff_RDI = puVar10;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


