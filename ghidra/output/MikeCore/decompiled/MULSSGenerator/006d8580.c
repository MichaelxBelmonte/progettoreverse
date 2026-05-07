// Function: FUN_006d8580
// Address: 006d8580
// Size: 1553 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x006d8738) */
/* WARNING: Removing unreachable block (ram,0x006d8741) */
/* WARNING: Removing unreachable block (ram,0x006d8907) */
/* WARNING: Removing unreachable block (ram,0x006d8910) */
/* WARNING: Removing unreachable block (ram,0x006d8977) */
/* WARNING: Removing unreachable block (ram,0x006d89a0) */
/* WARNING: Removing unreachable block (ram,0x006d8979) */
/* WARNING: Removing unreachable block (ram,0x006d89a2) */

ulonglong FUN_006d8580(undefined8 param_1,char param_2)

{
  int iVar1;
  pthread_key_t pVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong lVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  undefined8 unaff_RDI;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  longlong local_b8;
  char local_b0;
  longlong local_60;
  char local_58;
  int local_48;
  
  FUN_006cb500();
  uVar15 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (local_b8 == 0) {
    uVar14 = CONCAT71(uVar15,1);
    goto LAB_006d8bca;
  }
  FUN_006cb500();
  iVar1 = *(int *)(local_60 + 0xc);
  uVar14 = CONCAT71(uVar15,iVar1 == 0);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if (local_b0 != '\0') {
    FUN_00d50b20();
  }
  if ((iVar1 == 0) || (param_2 == '\0')) goto LAB_006d8bca;
  FUN_006cb500();
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
      goto LAB_006d8643;
    }
  }
  else if (local_b8 != 0) {
LAB_006d8643:
    if (0 < *(int *)(local_b8 + 0xc)) {
      uVar16 = 0;
      do {
        lVar13 = local_60;
        uVar3 = *(undefined8 *)(*(longlong *)(local_b8 + 0x10) + (ulonglong)uVar16 * 8);
        pVar11 = uVar16;
        pvVar9 = _pthread_getspecific(uVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            goto LAB_006d8750;
          }
        }
        else if (local_60 != 0) {
LAB_006d8750:
          pvVar9 = _pthread_getspecific(pVar11);
          pVar2 = (pthread_key_t)local_60;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar17 = (float)FUN_012c6a80();
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar18 = (float)FUN_012c6af0();
          dVar7 = DAT_023b67d8;
          dVar20 = (double)fVar17;
          bVar4 = dVar20 < DAT_023b67e0;
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          FUN_012c6a20(0);
          cVar8 = FUN_006cff00();
          if (cVar8 == '\0') {
            pvVar9 = _pthread_getspecific(pVar11);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar11 = pVar2;
            }
            FUN_012c6a90(0);
          }
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = (pthread_key_t)uVar3;
          }
          FUN_012e5ae0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              goto LAB_006d8918;
            }
          }
          else if (local_60 != 0) {
LAB_006d8918:
            bVar5 = (double)fVar18 < DAT_023b67e0;
            bVar6 = DAT_023b67d8 < (double)fVar18;
            local_58 = '\0';
            local_60 = 0;
            local_48 = -1;
            while( true ) {
              lVar10 = (longlong)local_48;
              local_48 = local_48 + 1;
              if (*(int *)(lVar13 + 0xc) <= local_48) break;
              lVar12 = *(longlong *)(lVar13 + 0x10);
              local_60 = *(longlong *)(lVar12 + 8 + lVar10 * 8);
              cVar8 = FUN_006cff00();
              pVar11 = (pthread_key_t)lVar12;
              if (cVar8 == '\0' && (bVar6 || bVar5)) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_01265b70();
                FUN_01259600(fVar19 + fVar18);
              }
              if (dVar7 < dVar20 || bVar4) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_0125a2c0();
                FUN_0125a580(fVar19 + fVar17);
              }
            }
            FUN_001159b0();
            pVar11 = (pthread_key_t)lVar13;
            FUN_00d50b20();
          }
          if (dVar7 < dVar20 || bVar4) {
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_012879b0();
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(local_b8 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  uVar14 = 0;
LAB_006d8bca:
  return (uVar14 ^ 1) & 0xffffffff;
}


