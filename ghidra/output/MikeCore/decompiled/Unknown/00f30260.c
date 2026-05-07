// Function: FUN_00f30260
// Address: 00f30260
// Size: 1588 bytes
// Class: Unknown


byte * FUN_00f30260(char *param_1,int param_2,char param_3,uint param_4)

{
  bool bVar1;
  longlong lVar2;
  __darwin_ct_rune_t _Var3;
  __darwin_ct_rune_t _Var4;
  uint uVar5;
  size_t sVar6;
  undefined4 extraout_var;
  char *pcVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  byte bVar12;
  char *pcVar13;
  longlong lVar14;
  byte *unaff_RDI;
  longlong lVar15;
  int local_38;
  uint local_34;
  
  uVar10 = 0;
  pcVar7 = param_1;
  FUN_00f2d870();
  if ((param_2 == 0) || (DAT_0278a820 == '\0')) {
    if (unaff_RDI != (byte *)0x0) {
      if (param_3 == '\0') {
        if (param_4 != 1) {
          do {
            bVar12 = *unaff_RDI;
            if (bVar12 == 0) {
              return (byte *)0x0;
            }
            lVar15 = 0;
            pcVar7 = (char *)(ulonglong)param_4;
            do {
              bVar8 = param_1[lVar15];
              if ((bVar8 == 0) || (bVar12 != bVar8)) goto LAB_00f3084f;
              bVar12 = unaff_RDI[lVar15 + 1];
              lVar15 = lVar15 + 1;
            } while (bVar12 != 0);
            bVar8 = param_1[lVar15];
LAB_00f3084f:
            if (bVar8 == 0) goto LAB_00f30882;
            local_34 = 0;
            local_38 = 1;
            if (*unaff_RDI == 0x26) {
              unaff_RDI = (byte *)FUN_00f2fec0(pcVar7,&local_38);
            }
            else {
              local_34 = (uint)*unaff_RDI;
              unaff_RDI = unaff_RDI + 1;
            }
            FUN_00f2d920();
            if (unaff_RDI == (byte *)0x0) {
              return (byte *)0x0;
            }
          } while( true );
        }
        do {
          pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),*unaff_RDI);
          if (*unaff_RDI == 0) {
            return (byte *)0x0;
          }
          lVar15 = 0;
          do {
            cVar11 = param_1[lVar15];
            if ((cVar11 == '\0') || ((char)pcVar7 != cVar11)) goto LAB_00f3066f;
            lVar9 = lVar15 + 1;
            pcVar7 = (char *)(ulonglong)unaff_RDI[lVar9];
            lVar15 = lVar15 + 1;
          } while (unaff_RDI[lVar9] != 0);
          cVar11 = param_1[lVar15];
LAB_00f3066f:
          if (cVar11 == '\0') goto LAB_00f30882;
          local_34 = 0;
          local_38 = *(int *)(&DAT_023e4d40 + (ulonglong)*unaff_RDI * 4);
          lVar15 = (longlong)local_38;
          if (lVar15 == 0) {
            unaff_RDI = (byte *)0x0;
          }
          else if (local_38 == 1) {
            if (*unaff_RDI == 0x26) {
              pcVar7 = (char *)0x0;
              unaff_RDI = (byte *)FUN_00f2fec0(1,&local_38);
            }
            else {
              local_34 = (uint)*unaff_RDI;
              unaff_RDI = unaff_RDI + 1;
            }
          }
          else {
            pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),*unaff_RDI);
            if (*unaff_RDI != 0) {
              lVar9 = 0;
              if (0 < lVar15) {
                lVar9 = lVar15;
              }
              lVar14 = 0;
              do {
                if (lVar9 == lVar14) break;
                *(char *)((longlong)&local_34 + lVar14) = (char)pcVar7;
                lVar2 = lVar14 + 1;
                pcVar7 = (char *)(ulonglong)unaff_RDI[lVar2];
                lVar14 = lVar14 + 1;
              } while (unaff_RDI[lVar2] != 0);
            }
            unaff_RDI = unaff_RDI + lVar15;
          }
          FUN_00f2d920();
          if (unaff_RDI == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while( true );
      }
      if (param_4 == 1) {
        while( true ) {
          if (*unaff_RDI == 0) {
            return (byte *)0x0;
          }
          lVar15 = 0;
          do {
            if (param_1[lVar15] == '\0') goto LAB_00f30882;
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar7);
            _Var4 = ___tolower((__darwin_ct_rune_t)pcVar7);
          } while ((_Var3 == _Var4) &&
                  (lVar9 = lVar15 + 1, lVar15 = lVar15 + 1, unaff_RDI[lVar9] != 0));
          if (param_1[lVar15] == '\0') break;
          local_34 = 0;
          pcVar7 = "\x01";
          local_38 = *(int *)(&DAT_023e4d40 + (ulonglong)*unaff_RDI * 4);
          lVar15 = (longlong)local_38;
          if (lVar15 == 0) {
            unaff_RDI = (byte *)0x0;
          }
          else {
            pcVar7 = (char *)((longlong)&MACH_HEADER.magic + 1);
            if (local_38 == 1) {
              if (*unaff_RDI == 0x26) {
                unaff_RDI = (byte *)FUN_00f2fec0(1,&local_38);
              }
              else {
                local_34 = (uint)*unaff_RDI;
                unaff_RDI = unaff_RDI + 1;
              }
            }
            else {
              pcVar7 = (char *)(ulonglong)*unaff_RDI;
              if (*unaff_RDI != 0) {
                lVar9 = 0;
                if (0 < lVar15) {
                  lVar9 = lVar15;
                }
                lVar14 = 0;
                do {
                  if (lVar9 == lVar14) break;
                  *(char *)((longlong)&local_34 + lVar14) = (char)pcVar7;
                  lVar2 = lVar14 + 1;
                  pcVar7 = (char *)(ulonglong)unaff_RDI[lVar2];
                  lVar14 = lVar14 + 1;
                } while (unaff_RDI[lVar2] != 0);
              }
              unaff_RDI = unaff_RDI + lVar15;
            }
          }
          FUN_00f2d920();
          if (unaff_RDI == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
      else {
        while( true ) {
          if (*unaff_RDI == 0) {
            return (byte *)0x0;
          }
          lVar15 = 0;
          do {
            if (param_1[lVar15] == '\0') goto LAB_00f30882;
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar7);
            _Var4 = ___tolower((__darwin_ct_rune_t)pcVar7);
          } while ((_Var3 == _Var4) &&
                  (lVar9 = lVar15 + 1, lVar15 = lVar15 + 1, unaff_RDI[lVar9] != 0));
          if (param_1[lVar15] == '\0') break;
          local_34 = 0;
          local_38 = 1;
          if (*unaff_RDI == 0x26) {
            pcVar7 = (char *)(ulonglong)param_4;
            unaff_RDI = (byte *)FUN_00f2fec0(pcVar7,&local_38);
          }
          else {
            local_34 = (uint)*unaff_RDI;
            unaff_RDI = unaff_RDI + 1;
          }
          FUN_00f2d920();
          if (unaff_RDI == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
LAB_00f30882:
      if (*unaff_RDI != 0) {
        sVar6 = _strlen(pcVar7);
        if (unaff_RDI[CONCAT44(extraout_var,sVar6)] != 0) {
          return unaff_RDI + CONCAT44(extraout_var,sVar6);
        }
        return (byte *)0x0;
      }
    }
  }
  else {
    unaff_RDI = (byte *)FUN_00f2fd80();
    if (unaff_RDI != (byte *)0x0) {
      bVar1 = false;
      do {
        pcVar13 = (char *)(ulonglong)*unaff_RDI;
        if (*unaff_RDI == 0) {
          return (byte *)0x0;
        }
        if (param_3 == '\0') {
          lVar15 = 0;
          pcVar7 = pcVar13;
          do {
            bVar12 = param_1[lVar15];
            uVar10 = (ulonglong)bVar12;
            if ((bVar12 == 0) || ((byte)pcVar7 != bVar12)) goto LAB_00f3036f;
            lVar9 = lVar15 + 1;
            pcVar7 = (char *)(ulonglong)unaff_RDI[lVar9];
            lVar15 = lVar15 + 1;
          } while (unaff_RDI[lVar9] != 0);
          uVar10 = (ulonglong)(byte)param_1[lVar15];
LAB_00f3036f:
          if ((char)uVar10 == '\0') goto LAB_00f30882;
        }
        else {
          lVar15 = 0;
          do {
            if (param_1[lVar15] == '\0') goto LAB_00f30882;
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar7);
            _Var4 = ___tolower((__darwin_ct_rune_t)pcVar7);
          } while ((_Var3 == _Var4) &&
                  (lVar9 = lVar15 + 1, lVar15 = lVar15 + 1, unaff_RDI[lVar9] != 0));
          if (param_1[lVar15] == '\0') goto LAB_00f30882;
          pcVar13 = (char *)(ulonglong)*unaff_RDI;
        }
        cVar11 = (char)pcVar13;
        if ((cVar11 == '\r') || (cVar11 == '\n')) {
LAB_00f303c0:
          unaff_RDI = unaff_RDI + 1;
          bVar1 = true;
          if (unaff_RDI == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          if (cVar11 < '\0') {
            uVar5 = ___maskrune((__darwin_ct_rune_t)pcVar7,(ulong)uVar10);
          }
          else {
            pcVar7 = &DAT_00004000;
            uVar5 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (longlong)pcVar13 * 4 + 0x3c) &
                    0x4000;
          }
          if (((uVar5 != 0) || (cVar11 == '\r')) || (cVar11 == '\n')) goto LAB_00f303c0;
          if (bVar1) {
            uVar5 = (uint)local_38 >> 8;
            local_38 = CONCAT31((int3)uVar5,0x20);
            FUN_00f2d920();
            bVar1 = false;
          }
          local_34 = 0;
          pcVar7 = (char *)(ulonglong)param_4;
          if (param_4 == 1) {
            local_38 = *(int *)(&DAT_023e4d40 + (ulonglong)*unaff_RDI * 4);
            lVar15 = (longlong)local_38;
            if (lVar15 != 0) {
              if (local_38 == 1) goto LAB_00f3045b;
              pcVar7 = (char *)(ulonglong)*unaff_RDI;
              if (*unaff_RDI != 0) {
                lVar9 = 0;
                if (0 < lVar15) {
                  lVar9 = lVar15;
                }
                lVar14 = 0;
                do {
                  if (lVar9 == lVar14) break;
                  *(char *)((longlong)&local_34 + lVar14) = (char)pcVar7;
                  lVar2 = lVar14 + 1;
                  pcVar7 = (char *)(ulonglong)unaff_RDI[lVar2];
                  lVar14 = lVar14 + 1;
                } while (unaff_RDI[lVar2] != 0);
              }
              unaff_RDI = unaff_RDI + lVar15;
              goto LAB_00f30478;
            }
            unaff_RDI = (byte *)0x0;
LAB_00f304af:
            uVar10 = (ulonglong)local_38;
            FUN_00f2d920();
          }
          else {
            local_38 = 1;
LAB_00f3045b:
            if (*unaff_RDI == 0x26) {
              unaff_RDI = (byte *)FUN_00f2fec0(pcVar7,&local_38);
LAB_00f30478:
              if (local_38 != 1) goto LAB_00f304af;
            }
            else {
              local_34 = (uint)*unaff_RDI;
              unaff_RDI = unaff_RDI + 1;
            }
            uVar10 = 1;
            FUN_00f2d920();
          }
          if (unaff_RDI == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while( true );
    }
  }
  return (byte *)0x0;
}


