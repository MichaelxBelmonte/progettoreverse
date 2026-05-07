// Function: FUN_01388750
// Address: 01388750
// Size: 2596 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0138883f) */
/* WARNING: Removing unreachable block (ram,0x01388848) */
/* WARNING: Removing unreachable block (ram,0x01388914) */
/* WARNING: Removing unreachable block (ram,0x0138891d) */
/* WARNING: Removing unreachable block (ram,0x01388dc5) */
/* WARNING: Removing unreachable block (ram,0x01388dce) */
/* WARNING: Removing unreachable block (ram,0x01388ba2) */
/* WARNING: Removing unreachable block (ram,0x01388bab) */
/* WARNING: Removing unreachable block (ram,0x01388ae4) */
/* WARNING: Removing unreachable block (ram,0x01388aed) */
/* WARNING: Removing unreachable block (ram,0x01388d65) */
/* WARNING: Removing unreachable block (ram,0x01388d6e) */

void FUN_01388750(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong *unaff_RSI;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar9 = 0;
      do {
        iVar12 = (int)uVar9;
        lVar14 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar9 * 8);
        lVar13 = *(longlong *)(lVar14 + 0x10);
        bVar4 = true;
        if (lVar13 == 0) {
LAB_013888c0:
          bVar5 = true;
          local_68 = 0;
          lVar13 = *(longlong *)(lVar14 + 0x18);
          if (lVar13 == 0) goto LAB_01388a00;
LAB_013888e5:
          FUN_00d50b00();
          local_38 = '\0';
          cVar6 = FUN_00d24090();
          FUN_00d50b20();
          local_40 = lVar13;
          if ((cVar6 != '\0') || (local_60 = *(longlong *)(lVar14 + 0x18), local_60 == 0))
          goto LAB_01388a00;
          FUN_00d50b00();
          bVar4 = false;
          if (local_68 == 0) goto LAB_01388990;
LAB_01388a1a:
          if (local_60 == 0) {
            if (*(longlong *)(lVar14 + 0x18) == 0) {
LAB_01388bdb:
              local_58 = 0;
              bVar3 = false;
            }
            else {
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de560();
              if (local_38 == '\0') {
                if (local_40 == 0) goto LAB_01388bdb;
                FUN_00d50b00();
              }
              else if (local_40 == 0) goto LAB_01388bdb;
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bc340();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 == 0) {
                local_58 = 0;
                bVar3 = false;
              }
              else {
                pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc340();
                pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014d1d00();
                if (local_40 == 0) {
                  bVar3 = false;
                }
                else if (local_38 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                }
                else {
                  local_38 = '\0';
                  bVar3 = true;
                }
                local_58 = local_40;
                if ((local_70 != '\0') && (local_78 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            lVar13 = *(longlong *)(lVar14 + 0x10);
            uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
            if (lVar13 == local_58) {
              bVar2 = false;
              local_80 = 0;
            }
            else {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              *(longlong *)(lVar14 + 0x10) = local_58;
              if (lVar13 != 0) goto LAB_01388e2c;
              bVar2 = false;
              local_80 = 0;
              uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
            }
            goto LAB_01388e92;
          }
          if (*(longlong *)(lVar14 + 0x10) == 0) {
LAB_01388b20:
            bVar2 = false;
            local_80 = 0;
LAB_01388d8f:
            bVar3 = false;
            local_58 = 0;
            lVar13 = *(longlong *)(lVar14 + 0x18);
            if (lVar13 != local_80) {
LAB_01388e66:
              if (local_80 != 0) {
                FUN_00d50b00();
              }
              *(longlong *)(lVar14 + 0x18) = local_80;
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
            }
LAB_01388e90:
            uVar9 = 0;
            goto LAB_01388e92;
          }
          *(undefined8 *)(lVar14 + 0x10) = 0;
          bVar3 = false;
          local_58 = 0;
LAB_01388e2c:
          FUN_00d50b20();
          local_80 = 0;
          bVar2 = false;
          if (local_60 != 0) {
            lVar13 = *(longlong *)(lVar14 + 0x18);
            local_80 = 0;
            if (lVar13 != 0) goto LAB_01388e66;
            goto LAB_01388e90;
          }
          uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
          uVar11 = *(uint *)(*(longlong *)(lVar14 + 0x28) + 0xc);
joined_r0x01388ea6:
          if (0 < (int)uVar11) {
            lVar13 = (ulonglong)uVar11 + 1;
            uVar10 = uVar9;
            do {
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              if (local_40 == 0) {
                bVar15 = true;
              }
              else {
                pvVar7 = _pthread_getspecific((pthread_key_t)uVar10);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e7c0();
                bVar15 = local_78 == local_68;
                if ((local_70 != '\0') && (local_78 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (bVar15) {
                FUN_00d23620();
              }
              lVar13 = lVar13 + -1;
            } while (1 < lVar13);
            uVar9 = uVar9 & 0xffffffff;
          }
        }
        else {
          FUN_00d50b00();
          local_38 = '\0';
          cVar6 = FUN_00d24090();
          FUN_00d50b20();
          local_40 = lVar13;
          if ((cVar6 != '\0') || (local_68 = *(longlong *)(lVar14 + 0x10), local_68 == 0))
          goto LAB_013888c0;
          FUN_00d50b00();
          bVar5 = false;
          lVar13 = *(longlong *)(lVar14 + 0x18);
          if (lVar13 != 0) goto LAB_013888e5;
LAB_01388a00:
          local_60 = 0;
          if (local_68 != 0) goto LAB_01388a1a;
LAB_01388990:
          pVar8 = (pthread_key_t)uVar9;
          if (local_60 != 0) {
            if (*(longlong *)(lVar14 + 0x10) == 0) goto LAB_01388b20;
            pvVar7 = _pthread_getspecific(pVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                goto LAB_01388af2;
              }
              goto LAB_01388b20;
            }
            if (local_40 == 0) goto LAB_01388b20;
LAB_01388af2:
            pvVar7 = _pthread_getspecific(pVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == 0) {
              local_80 = 0;
              bVar2 = false;
            }
            else {
              pvVar7 = _pthread_getspecific(pVar8);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bc420();
              pvVar7 = _pthread_getspecific(pVar8);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014d1d00();
              if (local_40 == 0) {
                bVar2 = false;
              }
              else if (local_38 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
              }
              else {
                local_38 = '\0';
                bVar2 = true;
              }
              local_80 = local_40;
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            goto LAB_01388d8f;
          }
          uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
          bVar2 = false;
          local_80 = 0;
          bVar3 = false;
          local_58 = 0;
LAB_01388e92:
          if (local_68 != 0) {
            uVar11 = *(uint *)(*(longlong *)(lVar14 + 0x28) + 0xc);
            goto joined_r0x01388ea6;
          }
        }
        cVar6 = (char)uVar9;
        if ((cVar6 == '\0') &&
           (uVar11 = *(uint *)(*(longlong *)(lVar14 + 0x28) + 0xc), 0 < (int)uVar11)) {
          lVar14 = (ulonglong)uVar11 + 1;
          do {
            pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if (local_40 == 0) {
              bVar15 = true;
            }
            else {
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              bVar15 = local_78 == local_60;
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (bVar15) {
              FUN_00d23620();
            }
            lVar14 = lVar14 + -1;
          } while (1 < lVar14);
        }
        if ((bVar2) && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar4 && cVar6 == '\0') {
          FUN_00d50b20();
        }
        if ((bVar3) && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar5 && local_68 != 0) {
          FUN_00d50b20();
        }
        uVar11 = iVar12 + 1;
        uVar9 = (ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(lVar1 + 0xc));
    }
    FUN_01954b60();
  }
  return;
}


