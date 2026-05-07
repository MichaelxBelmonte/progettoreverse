// Function: FUN_007ca0e0
// Address: 007ca0e0
// Size: 2927 bytes
// Class: GNString
// String references:
//   "%I %%"
//   "%I %% - %I %%"


void FUN_007ca0e0(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  float local_dc;
  undefined *local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  undefined *local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined *local_98;
  char local_90;
  float local_84;
  undefined *local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int local_4c;
  undefined *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  
  FUN_00364b20();
  local_80 = local_48;
  bVar13 = local_48 == (undefined *)0x0;
  if (bVar13) {
    bVar3 = false;
    local_80 = (undefined *)0x0;
  }
  else {
    if ((char)local_40 == '\0') {
      FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int *)(local_80 + 0xc) != 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
      *(undefined8 *)(unaff_RDI + 0xb0) = 0x7fc000007fc00000;
      uVar12 = *(uint *)(local_80 + 0xc);
      if ((int)uVar12 < 1) {
        local_74 = 0.0;
        local_60 = 0;
        lVar10 = 0;
        local_6c = 0.0;
        local_84 = 0.0;
        local_70 = DAT_02390124;
        local_64 = DAT_02390124;
        local_68 = 0.0;
      }
      else {
        lVar11 = (ulonglong)uVar12 + 1;
        uVar12 = uVar12 - 1;
        local_68 = 0.0;
        lVar10 = 0;
        local_64 = DAT_02390124;
        local_84 = 0.0;
        local_6c = 0.0;
        local_70 = DAT_02390124;
        local_74 = 0.0;
        local_60 = 0;
        do {
          while( true ) {
            lVar6 = *(longlong *)(local_80 + 0x10);
            lVar1 = *(longlong *)(lVar6 + (ulonglong)uVar12 * 8);
            pVar9 = uVar12;
            if (lVar10 == lVar1) {
              if (((char)local_60 == '\0') && (lVar10 != 0)) {
                local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                lVar6 = FUN_00d50b00();
              }
              if (((char)local_60 == '\0') || (lVar10 == 0)) {
                local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
                lVar10 = lVar1;
              }
              else {
                uVar7 = FUN_00d50b20();
                local_60 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                lVar10 = lVar1;
              }
            }
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            if (local_48 != (undefined *)0x0) break;
LAB_007ca210:
            FUN_00d23620();
LAB_007ca21c:
            lVar11 = lVar11 + -1;
            uVar12 = uVar12 - 1;
            if (lVar11 < 2) goto LAB_007ca67e;
          }
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01263cf0();
          if (cVar4 != '\0') {
            if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_007ca210;
          }
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01263ef0();
          if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') goto LAB_007ca210;
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_78 = (float)FUN_0152de10();
          if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_dc = (float)FUN_0125eba0();
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0152e210();
          cVar5 = '\x01';
          if (cVar4 == '\0') {
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar5 = FUN_0152e940();
            if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
          fVar16 = local_78;
          if (local_70 <= local_78) {
            fVar16 = local_70;
          }
          local_74 = local_74 + local_78;
          fVar17 = local_78;
          if (local_78 <= local_6c) {
            fVar17 = local_6c;
          }
          fVar14 = 0.0;
          if (0.0 <= local_dc) {
            fVar14 = local_dc;
          }
          fVar15 = DAT_02390124;
          if (fVar14 <= DAT_02390124) {
            fVar15 = fVar14;
          }
          fVar15 = DAT_02390124 - fVar15;
          fVar14 = fVar15;
          if (local_64 <= fVar15) {
            fVar14 = local_64;
          }
          local_84 = local_84 + fVar15;
          if (fVar15 <= local_68) {
            fVar15 = local_68;
          }
          local_70 = fVar16;
          local_68 = fVar15;
          local_64 = fVar14;
          if (cVar5 != '\0') {
            local_78 = fVar17;
            (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x998))();
            local_6c = local_78;
            goto LAB_007ca21c;
          }
          lVar11 = lVar11 + -1;
          uVar12 = uVar12 - 1;
          local_6c = fVar17;
        } while (1 < lVar11);
LAB_007ca67e:
        uVar12 = *(uint *)(local_80 + 0xc);
      }
      local_74 = local_74 / (float)(int)uVar12;
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x928))(local_74);
      plVar2 = *(longlong **)(unaff_RDI + 0x98);
      if ((local_70 != local_6c) || (NAN(local_70) || NAN(local_6c))) {
        local_3c = (int)(local_70 * DAT_023908e0);
        local_38 = (int)(local_6c * DAT_023908e0);
        local_40 = 2;
        local_48 = &DAT_024c3df0;
        FUN_00d8cb40(local_38,&local_48);
        local_c8 = local_58;
        local_c0 = 0;
        if ((char)local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_c0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_4c = (int)(local_74 * DAT_023908e0);
        local_50 = 1;
        local_58 = &DAT_024cc6f0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_58);
        local_d8 = local_48;
        local_d0 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (undefined *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_d0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_d0 != '\0') && (local_d8 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
      }
      fVar16 = 0.0;
      if (0.0 <= local_84 / (float)*(int *)(local_80 + 0xc)) {
        fVar16 = local_84 / (float)*(int *)(local_80 + 0xc);
      }
      local_78 = DAT_02390124;
      if (fVar16 <= DAT_02390124) {
        local_78 = fVar16;
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x928))();
      plVar2 = *(longlong **)(unaff_RDI + 0xa0);
      if ((local_64 != local_68) || (NAN(local_64) || NAN(local_68))) {
        local_3c = (int)(local_64 * DAT_023908e0);
        local_38 = (int)(local_68 * DAT_023908e0);
        local_40 = 2;
        local_48 = &DAT_024c3df0;
        FUN_00d8cb40(local_38,&local_48);
        local_a8 = local_58;
        local_a0 = 0;
        if ((char)local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_a0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_4c = (int)(local_78 * DAT_023908e0);
        local_50 = 1;
        local_58 = &DAT_024cc6f0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_58);
        local_b8 = local_48;
        local_b0 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (undefined *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_b0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_b0 != '\0') && (local_b8 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
      lVar11 = DAT_0272f190;
      plVar2 = *(longlong **)(unaff_RDI + 0xb8);
      if (DAT_0272f190 != 0) {
        FUN_00d50b00();
      }
      lVar6 = DAT_0272f198;
      if (DAT_0272f198 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar6;
      local_f8 = '\x01';
      local_f0 = 0;
      local_e8 = '\0';
      FUN_00d31230(&local_f0,&local_100);
      local_98 = local_48;
      local_90 = 0;
      if ((char)local_40 == '\0') {
        if (local_48 != (undefined *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      local_90 = '\x01';
      (**(code **)(*plVar2 + 0x958))();
      if ((local_90 != '\0') && (local_98 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      bVar3 = true;
      bVar13 = false;
      if (((char)local_60 != '\0') && (bVar13 = false, lVar10 != 0)) {
        FUN_00d50b20();
        bVar13 = false;
      }
      goto LAB_007cac49;
    }
    bVar3 = true;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x998))();
LAB_007cac49:
  if ((bVar3) && (!bVar13)) {
    FUN_00d50b20();
  }
  return;
}


