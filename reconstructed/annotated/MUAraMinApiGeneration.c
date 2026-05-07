// ===== MUAraMinApiGeneration — Annotated small functions =====
// 1 readable functions

// ==================================================
// @016acf90 (2524 bytes) — math_loop

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  ulonglong *this;
  bool bVar14;
  bool bVar15;
  longlong local_e8;
  char local_e0;
  longlong *local_80;
  uint local_78;
  int local_74;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  
  FUN_00e87d20();
  FUN_00da7190();
  if (this == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else if (*this < 0x14) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    DAT_02802f60 = *(undefined8 **)((longlong)this + 0xc);
    iVar12 = (int)this[1];
    if (iVar12 < 2) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)(iVar12,"config->desiredApiGeneration >= MUAraMinApiGeneration");
      }
    }
    else if (iVar12 < 7) {
      lVar7 = FUN_00bce6e0();
      lVar3 = DAT_027cb140;
      if ((lVar7 == 0) || (3 < (int)this[1])) {
        if (DAT_027cb0f0 == -1) {
          DAT_027cb0f0 = (int)this[1];
          if (DAT_027cb0f0 < 1) {
            if (DAT_027cb140 != 0) {
              FUN_00d50b00();
            }
            FUN_00e7e120();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            local_78 = 1;
            local_80 = &DAT_024cc6f0;
            local_74 = DAT_027cb0f0;
            FUN_00d8cb40(&DAT_024cc6f0,&local_80);
            lVar3 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            lVar7 = DAT_027cb140;
            if (DAT_027cb140 != 0) {
              FUN_00d50b00();
            }
            FUN_00e7e120();
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00e36840();
          FUN_00e36330();
          FUN_00e36990();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (DAT_028ad8c0 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &DAT_02572358;
            (*DAT_02572370)();
            if (DAT_028ad8c0 == puVar8) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
              bVar14 = DAT_028ad8c0 != (undefined8 *)0x0;
              DAT_028ad8c0 = puVar8;
              if (bVar14) {
                FUN_00d50b20();
              }
            }
            if (DAT_028ad8c8 == '\0') {
              DAT_028ad8c8 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar15) {
              FUN_00d50b20();
            }
          }
          if (DAT_028ad890 == 0) {
            FUN_0141b540();
            lVar3 = local_60;
            if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d894f0();
            lVar7 = DAT_028ad890;
            if (DAT_028ad890 != local_60) {
              if (local_58 == '\0') {
                if (local_60 == 0) {
                  lVar7 = 0;
                }
                else {
                  FUN_00d50b00();
                  lVar7 = local_60;
                }
              }
              else {
                local_58 = '\0';
                lVar7 = local_60;
              }
              bVar15 = DAT_028ad890 != 0;
              DAT_028ad890 = lVar7;
              if (bVar15) {
                FUN_00d50b20();
                lVar7 = local_60;
              }
            }
            if ((lVar7 != 0) && (DAT_028ad898 == '\0')) {
              DAT_028ad898 = '\x01';
              FUN_00e8cb90();
              lVar7 = local_60;
            }
            if ((local_58 != '\0') && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            FUN_016be370();
            lVar7 = DAT_028ad8a0;
            if (DAT_028ad8a0 != local_60) {
              if (local_58 == '\0') {
                if (local_60 == 0) {
                  lVar7 = 0;
                }
                else {
                  FUN_00d50b00();
                  lVar7 = local_60;
                }
              }
              else {
                local_58 = '\0';
                lVar7 = local_60;
              }
              bVar15 = DAT_028ad8a0 != 0;
              DAT_028ad8a0 = lVar7;
              if (bVar15) {
                FUN_00d50b20();
                lVar7 = local_60;
              }
            }
            if ((lVar7 != 0) && (DAT_028ad8a8 == '\0')) {
              DAT_028ad8a8 = '\x01';
              FUN_00e8cb90();
              lVar7 = local_60;
            }
            if ((local_58 != '\0') && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            FUN_00c8e710();
            lVar7 = local_60;
            if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            lVar2 = DAT_028ad8b0;
            if ((DAT_028ad8b0 != lVar7) && (DAT_028ad8b0 = lVar7, lVar2 != 0)) {
              FUN_00d50b20();
            }
            if (lVar7 != 0) {
              if (DAT_028ad8b8 == '\0') {
                DAT_028ad8b8 = '\x01';
                FUN_00e8cb90();
              }
              if (lVar7 != 0 && lVar2 == lVar7) {
                FUN_00d50b20();
              }
            }
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar3;
            local_48 = 0xffffffff;
            local_40 = 0;
            iVar12 = 0;
            while( true ) {
              iVar13 = 0;
              if (iVar12 != 0) {
                if (iVar12 < 1) {
                  iVar13 = -iVar12;
                }
                else {
                  local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar12);
                  FUN_00d23690();
                  local_40 = local_40 + iVar12;
                  iVar13 = 0;
                }
                local_48 = CONCAT44(iVar13,(int)local_48);
              }
              lVar7 = (longlong)(int)local_48;
              iVar12 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar12);
              if (*(int *)(local_50 + 0xc) <= iVar12) break;
              pvVar11 = *(void **)(local_50 + 0x10);
              local_60 = *(longlong *)((longlong)pvVar11 + lVar7 * 8 + 8);
              pvVar9 = _pthread_getspecific((pthread_key_t)pvVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar6 = FUN_0141baa0();
              iVar12 = iVar13;
              if (cVar6 == '\0') {
                pvVar9 = _pthread_getspecific((pthread_key_t)pvVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b660();
                plVar4 = local_80;
                FUN_0141ae30();
                plVar5 = local_70;
                if (local_68 == '\0') {
                  if (local_70 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = '\0';
                }
                cVar6 = (**(code **)(*plVar4 + 0x50))();
                iVar12 = 0;
                if (cVar6 == '\0') {
                  iVar12 = *(int *)(DAT_028ad8b0 + 0x18) / 0x18;
                }
                if (plVar5 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar9 = _pthread_getspecific((pthread_key_t)pvVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b660();
                plVar4 = local_70;
                if (local_68 == '\0') {
                  if (local_70 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_80 = plVar4;
                local_78 = local_78 & 0xffffff00;
                FUN_00d23370();
                if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar4 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar9 = _pthread_getspecific((pthread_key_t)pvVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b690();
                FUN_00d8cf90();
                plVar4 = local_70;
                if (local_68 == '\0') {
                  if (local_70 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_80 = plVar4;
                local_78 = local_78 & 0xffffff00;
                FUN_00d23370();
                if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar4 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_e0 != '\0') && (local_e8 != 0)) {
                  FUN_00d50b20();
                }
                uVar10 = FUN_00d8b910();
                lVar7 = DAT_028ad8b0;
                uVar1 = *(undefined8 *)
                         (*(longlong *)(*(longlong *)(DAT_028ad8a0 + 0x10) + (longlong)iVar12 * 8) +
                         0x10);
                iVar13 = *(int *)(DAT_028ad8b0 + 0x18);
                FUN_00c8e340();
                lVar2 = (longlong)iVar12 * 0x18;
                lVar7 = *(longlong *)(lVar7 + 0x10);
                _memmove(pvVar11,(void *)(longlong)(iVar13 - (int)lVar2),param_3);
                *(undefined8 *)(lVar7 + lVar2) = 0x18;
                *(undefined8 *)(lVar7 + 8 + lVar2) = uVar10;
                *(undefined8 *)(lVar7 + 0x10 + lVar2) = uVar1;
                iVar12 = local_48._4_4_;
              }
            }
            FUN_002a08f0();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(iVar12,"config->desiredApiGeneration <= MUAraMaxApiGeneration");
    }
  }
  FUN_00da71b0();
  return;
}



