// Function: FUN_0124cb30
// Address: 0124cb30
// Size: 1399 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x0124cf21) */

ulonglong FUN_0124cb30(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  char cVar15;
  ulonglong uVar16;
  uint local_6c;
  ulonglong local_60;
  char local_58;
  ulonglong local_48;
  ulonglong local_40;
  char local_31;
  
  lVar7 = *(longlong *)(unaff_RDI + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if (0 < (int)uVar1) {
    local_6c = (uint)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    uVar10 = 0;
    local_40 = 0;
    bVar4 = false;
    uVar8 = 0;
    local_48 = 0;
    uVar9 = 0;
    uVar12 = 0;
    bVar14 = false;
    do {
      uVar11 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + uVar10 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar8);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      FUN_01327a50();
      cVar15 = (char)uVar9;
      if (local_60 == local_48) {
        if ((cVar15 == '\0') && (local_60 != 0)) {
          local_31 = '\x01';
          uVar8 = local_48;
          if (local_58 == '\0') {
            FUN_00d50b00();
            goto LAB_0124cc60;
          }
        }
        else {
joined_r0x0124cfec:
          local_31 = cVar15;
          uVar8 = local_48;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        local_31 = '\x01';
        uVar8 = local_60;
        if ((cVar15 != '\0') && (uVar8 = local_60, local_48 != 0)) {
          FUN_00d50b20();
          local_48 = local_60;
LAB_0124cc60:
          local_31 = '\x01';
          cVar15 = local_31;
          goto joined_r0x0124cfec;
        }
      }
      else {
        local_31 = '\x01';
        uVar8 = local_60;
        if ((cVar15 != '\0') && (uVar8 = local_60, local_48 != 0)) {
          FUN_00d50b20();
          uVar8 = local_60;
        }
      }
      local_48 = uVar8;
      uVar8 = local_48;
      if ((local_48 != 0) && (uVar2 = *(uint *)(local_48 + 0xc), 0 < (int)uVar2)) {
        uVar8 = 0;
        do {
          uVar11 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + uVar8 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar8);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            uVar11 = *(ulonglong *)(uVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          FUN_013df790();
          if (local_60 == local_40) {
            if ((bVar4) || (local_60 == 0)) {
joined_r0x0124cf78:
              uVar9 = local_40;
              bVar5 = bVar4;
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              uVar9 = local_40;
              bVar5 = true;
              if (local_58 == '\0') {
                FUN_00d50b00();
                goto LAB_0124cdd2;
              }
            }
          }
          else if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            uVar9 = local_60;
            bVar5 = true;
            if ((bVar4) && (uVar9 = local_60, local_40 != 0)) {
              FUN_00d50b20();
              local_40 = local_60;
LAB_0124cdd2:
              bVar4 = true;
              goto joined_r0x0124cf78;
            }
          }
          else {
            bVar5 = true;
            uVar9 = local_60;
            if ((bVar4) && (uVar9 = local_60, local_40 != 0)) {
              FUN_00d50b20();
              uVar9 = local_60;
            }
          }
          bVar4 = bVar5;
          local_40 = uVar9;
          if ((local_40 != 0) && (uVar3 = *(uint *)(local_40 + 0xc), 0 < (int)uVar3)) {
            uVar16 = 0;
            uVar9 = local_40;
            uVar13 = uVar12;
            do {
              pvVar6 = _pthread_getspecific((pthread_key_t)uVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dd790();
              if (local_60 == uVar13) {
                if ((bVar14) || (local_60 == 0)) {
joined_r0x0124cf09:
                  uVar12 = uVar13;
                  bVar5 = bVar14;
                  if ((local_58 != '\0') && (local_60 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  uVar12 = uVar13;
                  bVar5 = true;
                  if (local_58 == '\0') {
                    FUN_00d50b00();
                    goto LAB_0124cef5;
                  }
                }
              }
              else {
                uVar12 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                  bVar5 = true;
                  if ((bVar14) && (uVar13 != 0)) {
                    FUN_00d50b20();
                    uVar13 = local_60;
LAB_0124cef5:
                    bVar14 = true;
                    goto joined_r0x0124cf09;
                  }
                }
                else {
                  bVar5 = true;
                  if ((bVar14) && (uVar13 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              bVar14 = bVar5;
              if ((uVar12 != 0) && (*(int *)(uVar12 + 0xc) != 0)) {
                uVar9 = (ulonglong)local_6c;
                goto LAB_0124d08e;
              }
              uVar16 = uVar16 + 1;
              uVar11 = local_60;
              uVar13 = uVar12;
            } while (uVar3 != uVar16);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar2);
      }
      uVar10 = uVar10 + 1;
      uVar9 = CONCAT71((int7)(uVar11 >> 8),uVar10 < uVar1);
      if (uVar10 == uVar1) goto LAB_0124d08e;
      local_6c = (uint)uVar9;
      lVar7 = *(longlong *)(unaff_RDI + 0x38);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),local_31);
      uVar9 = uVar8 & 0xffffffff;
    } while( true );
  }
  uVar9 = 0;
LAB_0124d0cf:
  return uVar9 & 0xffffff01;
LAB_0124d08e:
  if ((bVar14) && (uVar12 != 0)) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0124d0cf;
}


