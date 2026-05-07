// Function: FUN_015292f0
// Address: 015292f0
// Size: 1052 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x01529630) */
/* WARNING: Removing unreachable block (ram,0x01529639) */
/* WARNING: Removing unreachable block (ram,0x01529497) */
/* WARNING: Removing unreachable block (ram,0x015294a0) */
/* WARNING: Removing unreachable block (ram,0x01529671) */
/* WARNING: Removing unreachable block (ram,0x0152967a) */
/* WARNING: Removing unreachable block (ram,0x015294f0) */
/* WARNING: Removing unreachable block (ram,0x01529510) */
/* WARNING: Removing unreachable block (ram,0x015294f2) */
/* WARNING: Removing unreachable block (ram,0x01529512) */
/* WARNING: Removing unreachable block (ram,0x015296a1) */
/* WARNING: Removing unreachable block (ram,0x015296ae) */

undefined8 * FUN_015292f0(double param_1,double param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong unaff_RSI;
  ulonglong uVar13;
  undefined8 *unaff_RDI;
  int iVar14;
  bool bVar15;
  longlong local_80;
  char local_78;
  int local_68;
  undefined8 *local_58;
  undefined8 *local_50;
  
  pcVar5 = DAT_02578b18;
  pcVar4 = DAT_02572370;
  if (*(char *)(unaff_RSI + 0x38) != '\0') {
    uVar12 = (uint)(param_1 / (double)*(int *)(unaff_RSI + 0x3c) +
                   (double)*(int *)(unaff_RSI + 0x40));
    uVar8 = 0;
    if (-1 < (int)uVar12) {
      uVar8 = uVar12;
    }
    iVar14 = (int)((param_1 + param_2) / (double)*(int *)(unaff_RSI + 0x3c) +
                  (double)*(int *)(unaff_RSI + 0x40));
    if ((int)uVar8 <= iVar14) {
      uVar13 = (ulonglong)uVar8;
      local_50 = (undefined8 *)0x0;
      bVar3 = false;
      local_58 = (undefined8 *)0x0;
      bVar15 = false;
      do {
        lVar6 = local_80;
        pVar1 = *(pthread_key_t *)(*(longlong *)(unaff_RSI + 0x48) + 0xc);
        if ((longlong)(int)pVar1 <= (longlong)uVar13) break;
        pvVar9 = _pthread_getspecific(pVar1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
            goto LAB_015294b0;
          }
        }
        else if (local_80 != 0) {
LAB_015294b0:
          local_78 = '\0';
          local_80 = 0;
          local_68 = -1;
          while( true ) {
            lVar10 = (longlong)local_68;
            local_68 = local_68 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_68) break;
            lVar2 = *(longlong *)(lVar6 + 0x10);
            local_80 = *(longlong *)(lVar2 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar2);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_012754d0(param_1,param_2);
            if (cVar7 != '\0') {
              if (local_50 == (undefined8 *)0x0) {
                local_50 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *local_50 = &DAT_02572358;
                (*pcVar4)();
                puVar11 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &DAT_02578b00;
                (*pcVar5)();
                if ((bVar15) && (local_58 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                bVar3 = true;
                local_58 = puVar11;
                bVar15 = true;
              }
              cVar7 = FUN_00d7a850();
              if (cVar7 == '\0') {
                FUN_00d24b60(0,FUN_012e8c90,0);
                FUN_00d7a410();
              }
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != iVar14 + 1);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar3) {
        if (local_50 == (undefined8 *)0x0) {
          local_50 = (undefined8 *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_015296ee;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  bVar15 = false;
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
LAB_015296ee:
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar15) && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


