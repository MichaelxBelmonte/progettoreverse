// Function: FUN_019928f0
// Address: 019928f0
// Size: 2716 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01993250) */
/* WARNING: Removing unreachable block (ram,0x0199325c) */
/* WARNING: Removing unreachable block (ram,0x01992fa7) */
/* WARNING: Removing unreachable block (ram,0x01992fb3) */
/* WARNING: Removing unreachable block (ram,0x01992bc2) */
/* WARNING: Removing unreachable block (ram,0x01992bcb) */
/* WARNING: Removing unreachable block (ram,0x01992c7c) */
/* WARNING: Removing unreachable block (ram,0x01992c89) */
/* WARNING: Removing unreachable block (ram,0x01992c46) */
/* WARNING: Removing unreachable block (ram,0x01992c53) */
/* WARNING: Removing unreachable block (ram,0x01992b68) */
/* WARNING: Removing unreachable block (ram,0x01992b71) */
/* WARNING: Removing unreachable block (ram,0x01992e3a) */
/* WARNING: Removing unreachable block (ram,0x01992e46) */
/* WARNING: Removing unreachable block (ram,0x0199331b) */
/* WARNING: Removing unreachable block (ram,0x01993327) */
/* WARNING: Removing unreachable block (ram,0x01992ea6) */
/* WARNING: Removing unreachable block (ram,0x01992ed0) */
/* WARNING: Removing unreachable block (ram,0x01992ea8) */
/* WARNING: Removing unreachable block (ram,0x01992ed2) */

void FUN_019928f0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  pthread_key_t pVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  longlong local_c0;
  char local_b8;
  longlong local_a8;
  char local_a0;
  int local_90;
  longlong local_68;
  char local_60;
  
  FUN_01993800();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_01993800();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a740();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      pvVar6 = _pthread_getspecific(param_1);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (pthread_key_t)local_68;
      }
      FUN_01313ad0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      fVar13 = (float)(**(code **)(*unaff_RDI + 3000))();
      fVar14 = (float)(**(code **)(*unaff_RDI + 3000))();
      FUN_01cfcdc0(DAT_02394214,DAT_02390128,DAT_02390128,DAT_0239011c);
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      uVar23 = (ulonglong)DAT_02390128;
      FUN_01cfcdc0(0,uVar23,DAT_02390128,DAT_0239011c);
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      uVar18 = (**(code **)(*unaff_RDI + 0xa60))();
      (**(code **)(*unaff_RDI + 0x9b0))();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      dVar19 = (double)FUN_012912a0(0,0,0);
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        if (0 < *(int *)(local_68 + 0xc)) {
          fVar13 = fVar13 * DAT_02390438;
          fVar14 = fVar14 * DAT_02394240;
          pVar11 = 0;
          do {
            lVar7 = local_a8;
            pvVar6 = _pthread_getspecific(pVar11);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
                goto LAB_01992e4e;
              }
            }
            else if (local_a8 != 0) {
LAB_01992e4e:
              local_a0 = '\0';
              local_a8 = 0;
              local_90 = -1;
LAB_01992ea2:
              while( true ) {
                lVar8 = (longlong)local_90;
                local_90 = local_90 + 1;
                if (*(int *)(lVar7 + 0xc) <= local_90) break;
                lVar12 = *(longlong *)(lVar7 + 0x10);
                local_a8 = *(longlong *)(lVar12 + 8 + lVar8 * 8);
                pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e9900(uVar18,uVar23);
                if (local_b8 == '\0') goto LAB_01992f90;
                if (local_c0 != 0) {
                  iVar1 = *(int *)(local_c0 + 0xc);
                  goto joined_r0x01992fc3;
                }
              }
              FUN_000be170();
              FUN_00d50b20();
            }
            pVar11 = pVar11 + 1;
          } while ((int)pVar11 < *(int *)(local_68 + 0xc));
        }
        FUN_000be170();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
LAB_01992f90:
  if (local_c0 != 0) {
    FUN_00d50b00();
    iVar1 = *(int *)(local_c0 + 0xc);
joined_r0x01992fc3:
    if (0 < iVar1) {
      lVar8 = 0;
      bVar4 = false;
      lVar12 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_c0 + 0x10) + lVar8 * 8);
        lVar10 = local_c0;
        if (lVar12 == lVar2) {
          lVar2 = lVar12;
          bVar5 = bVar4;
          if ((!bVar4) && (lVar12 != 0)) {
            FUN_00d50b00();
            bVar5 = true;
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar4) && (lVar12 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar4 = bVar5;
        lVar12 = lVar2;
        pVar9 = (pthread_key_t)lVar10;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar20 = (double)FUN_0125a280();
        fVar15 = (float)(**(code **)(*unaff_RDI + 0x938))(dVar20 + dVar19);
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar20 = (double)FUN_01259520();
        fVar16 = (float)(**(code **)(*unaff_RDI + 0x938))(dVar20 + dVar19);
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2c0();
        fVar17 = (float)(**(code **)(*unaff_RDI + 0xbf8))();
        fVar21 = fVar17 - fVar13;
        (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))(fVar15);
        fVar22 = fVar13 + fVar17;
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar15);
        fVar3 = DAT_023908d8;
        if (DAT_023908d8 <= fVar16 - fVar15) {
          fVar3 = fVar16 - fVar15;
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar3 + fVar15,fVar14 + fVar17);
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar3 + fVar15,fVar17 - fVar14);
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar15,fVar21);
        FUN_01d488d0();
        (**(code **)(*(longlong *)*unaff_RSI + 0x518))();
        (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))(fVar15,fVar21);
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar15,fVar22);
        fVar16 = fVar15 + DAT_023908d8;
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar16,fVar22);
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar16,fVar21);
        (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(fVar15,fVar21);
        FUN_01d488d0();
        (**(code **)(*(longlong *)*unaff_RSI + 0x518))();
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(local_c0 + 0xc));
      if ((bVar4) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  goto LAB_01992ea2;
}


