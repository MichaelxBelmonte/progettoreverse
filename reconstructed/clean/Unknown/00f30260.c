// Function: FUN_00f30260
// Address: 00f30260
// Size: 1588 bytes
// Class: Unknown

byte * FUN_00f30260(char *param_1,int param_2,char param_3,uint param_4)

{
  bool bVar1;
  int64_t lVar2;
  __darwin_ct_rune_t _Var3;
  __darwin_ct_rune_t _Var4;
  uint uVar5;
  size_t sVar6;
  uint32_t extraout_var;
  char *pcVar7;
  byte bVar8;
  int64_t lVar9;
  uint64_t uVar10;
  char cVar11;
  byte bVar12;
  char *pcVar13;
  int64_t lVar14;
  byte *this_ptr;
  int64_t lVar15;
  int local_38;
  uint local_34;
  
  uVar10 = 0;
  pcVar7 = param_1;
  FUN_00f2d870();
  if ((param_2 == 0) || (g_0278a820 == '\0')) {
    if (this_ptr != (byte *)0x0) {
      if (param_3 == '\0') {
        if (param_4 != 1) {
          do {
            bVar12 = *this_ptr;
            if (bVar12 == 0) {
              return (byte *)0x0;
            }
            lVar15 = 0;
            pcVar7 = (char *)(uint64_t)param_4;
            do {
              bVar8 = param_1[lVar15];
              if ((bVar8 == 0) || (bVar12 != bVar8)) goto LAB_00f3084f;
              bVar12 = this_ptr[lVar15 + 1];
              lVar15 = lVar15 + 1;
            } while (bVar12 != 0);
            bVar8 = param_1[lVar15];
LAB_00f3084f:
            if (bVar8 == 0) goto LAB_00f30882;
            local_34 = 0;
            local_38 = 1;
            if (*this_ptr == 0x26) {
              this_ptr = (byte *)FUN_00f2fec0(pcVar7,&local_38);
            }
            else {
              local_34 = (uint)*this_ptr;
              this_ptr = this_ptr + 1;
            }
            FUN_00f2d920();
            if (this_ptr == (byte *)0x0) {
              return (byte *)0x0;
            }
          } while( true );
        }
        do {
          pcVar7 = (char *)CONCAT71((int7)((uint64_t)pcVar7 >> 8),*this_ptr);
          if (*this_ptr == 0) {
            return (byte *)0x0;
          }
          lVar15 = 0;
          do {
            cVar11 = param_1[lVar15];
            if ((cVar11 == '\0') || ((char)pcVar7 != cVar11)) goto LAB_00f3066f;
            lVar9 = lVar15 + 1;
            pcVar7 = (char *)(uint64_t)this_ptr[lVar9];
            lVar15 = lVar15 + 1;
          } while (this_ptr[lVar9] != 0);
          cVar11 = param_1[lVar15];
LAB_00f3066f:
          if (cVar11 == '\0') goto LAB_00f30882;
          local_34 = 0;
          local_38 = *(int *)(&g_023e4d40 + (uint64_t)*this_ptr * 4);
          lVar15 = (int64_t)local_38;
          if (lVar15 == 0) {
            this_ptr = (byte *)0x0;
          }
          else if (local_38 == 1) {
            if (*this_ptr == 0x26) {
              pcVar7 = (char *)0x0;
              this_ptr = (byte *)FUN_00f2fec0(1,&local_38);
            }
            else {
              local_34 = (uint)*this_ptr;
              this_ptr = this_ptr + 1;
            }
          }
          else {
            pcVar7 = (char *)CONCAT71((int7)((uint64_t)pcVar7 >> 8),*this_ptr);
            if (*this_ptr != 0) {
              lVar9 = 0;
              if (0 < lVar15) {
                lVar9 = lVar15;
              }
              lVar14 = 0;
              do {
                if (lVar9 == lVar14) break;
                *(char *)((int64_t)&local_34 + lVar14) = (char)pcVar7;
                lVar2 = lVar14 + 1;
                pcVar7 = (char *)(uint64_t)this_ptr[lVar2];
                lVar14 = lVar14 + 1;
              } while (this_ptr[lVar2] != 0);
            }
            this_ptr = this_ptr + lVar15;
          }
          FUN_00f2d920();
          if (this_ptr == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while( true );
      }
      if (param_4 == 1) {
        while( true ) {
          if (*this_ptr == 0) {
            return (byte *)0x0;
          }
          lVar15 = 0;
          do {
            if (param_1[lVar15] == '\0') goto LAB_00f30882;
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar7);
            _Var4 = ___tolower((__darwin_ct_rune_t)pcVar7);
          } while ((_Var3 == _Var4) &&
                  (lVar9 = lVar15 + 1, lVar15 = lVar15 + 1, this_ptr[lVar9] != 0));
          if (param_1[lVar15] == '\0') break;
          local_34 = 0;
          pcVar7 = "\x01";
          local_38 = *(int *)(&g_023e4d40 + (uint64_t)*this_ptr * 4);
          lVar15 = (int64_t)local_38;
          if (lVar15 == 0) {
            this_ptr = (byte *)0x0;
          }
          else {
            pcVar7 = (char *)((int64_t)&MACH_HEADER.magic + 1);
            if (local_38 == 1) {
              if (*this_ptr == 0x26) {
                this_ptr = (byte *)FUN_00f2fec0(1,&local_38);
              }
              else {
                local_34 = (uint)*this_ptr;
                this_ptr = this_ptr + 1;
              }
            }
            else {
              pcVar7 = (char *)(uint64_t)*this_ptr;
              if (*this_ptr != 0) {
                lVar9 = 0;
                if (0 < lVar15) {
                  lVar9 = lVar15;
                }
                lVar14 = 0;
                do {
                  if (lVar9 == lVar14) break;
                  *(char *)((int64_t)&local_34 + lVar14) = (char)pcVar7;
                  lVar2 = lVar14 + 1;
                  pcVar7 = (char *)(uint64_t)this_ptr[lVar2];
                  lVar14 = lVar14 + 1;
                } while (this_ptr[lVar2] != 0);
              }
              this_ptr = this_ptr + lVar15;
            }
          }
          FUN_00f2d920();
          if (this_ptr == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
      else {
        while( true ) {
          if (*this_ptr == 0) {
            return (byte *)0x0;
          }
          lVar15 = 0;
          do {
            if (param_1[lVar15] == '\0') goto LAB_00f30882;
            _Var3 = ___tolower((__darwin_ct_rune_t)pcVar7);
            _Var4 = ___tolower((__darwin_ct_rune_t)pcVar7);
          } while ((_Var3 == _Var4) &&
                  (lVar9 = lVar15 + 1, lVar15 = lVar15 + 1, this_ptr[lVar9] != 0));
          if (param_1[lVar15] == '\0') break;
          local_34 = 0;
          local_38 = 1;
          if (*this_ptr == 0x26) {
            pcVar7 = (char *)(uint64_t)param_4;
            this_ptr = (byte *)FUN_00f2fec0(pcVar7,&local_38);
          }
          else {
            local_34 = (uint)*this_ptr;
            this_ptr = this_ptr + 1;
          }
          FUN_00f2d920();
          if (this_ptr == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
LAB_00f30882:
      if (*this_ptr != 0) {
        sVar6 = _strlen(pcVar7);
        if (this_ptr[CONCAT44(extraout_var,sVar6)] != 0) {
          return this_ptr + CONCAT44(extraout_var,sVar6);
        }
        return (byte *)0x0;
      }
    }
  }
  else {
    this_ptr = (byte *)FUN_00f2fd80();
    if (this_ptr != (byte *)0x0) {
      bVar1 = false;
      do {
        pcVar13 = (char *)(uint64_t)*this_ptr;
        if (*this_ptr == 0) {
          return (byte *)0x0;
        }
        if (param_3 == '\0') {
          lVar15 = 0;
          pcVar7 = pcVar13;
          do {
            bVar12 = param_1[lVar15];
            uVar10 = (uint64_t)bVar12;
            if ((bVar12 == 0) || ((byte)pcVar7 != bVar12)) goto LAB_00f3036f;
            lVar9 = lVar15 + 1;
            pcVar7 = (char *)(uint64_t)this_ptr[lVar9];
            lVar15 = lVar15 + 1;
          } while (this_ptr[lVar9] != 0);
          uVar10 = (uint64_t)(byte)param_1[lVar15];
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
                  (lVar9 = lVar15 + 1, lVar15 = lVar15 + 1, this_ptr[lVar9] != 0));
          if (param_1[lVar15] == '\0') goto LAB_00f30882;
          pcVar13 = (char *)(uint64_t)*this_ptr;
        }
        cVar11 = (char)pcVar13;
        if ((cVar11 == '\r') || (cVar11 == '\n')) {
LAB_00f303c0:
          this_ptr = this_ptr + 1;
          bVar1 = true;
          if (this_ptr == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          if (cVar11 < '\0') {
            uVar5 = ___maskrune((__darwin_ct_rune_t)pcVar7,(ulong)uVar10);
          }
          else {
            pcVar7 = &g_00004000;
            uVar5 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (int64_t)pcVar13 * 4 + 0x3c) &
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
          pcVar7 = (char *)(uint64_t)param_4;
          if (param_4 == 1) {
            local_38 = *(int *)(&g_023e4d40 + (uint64_t)*this_ptr * 4);
            lVar15 = (int64_t)local_38;
            if (lVar15 != 0) {
              if (local_38 == 1) goto LAB_00f3045b;
              pcVar7 = (char *)(uint64_t)*this_ptr;
              if (*this_ptr != 0) {
                lVar9 = 0;
                if (0 < lVar15) {
                  lVar9 = lVar15;
                }
                lVar14 = 0;
                do {
                  if (lVar9 == lVar14) break;
                  *(char *)((int64_t)&local_34 + lVar14) = (char)pcVar7;
                  lVar2 = lVar14 + 1;
                  pcVar7 = (char *)(uint64_t)this_ptr[lVar2];
                  lVar14 = lVar14 + 1;
                } while (this_ptr[lVar2] != 0);
              }
              this_ptr = this_ptr + lVar15;
              goto LAB_00f30478;
            }
            this_ptr = (byte *)0x0;
LAB_00f304af:
            uVar10 = (uint64_t)local_38;
            FUN_00f2d920();
          }
          else {
            local_38 = 1;
LAB_00f3045b:
            if (*this_ptr == 0x26) {
              this_ptr = (byte *)FUN_00f2fec0(pcVar7,&local_38);
LAB_00f30478:
              if (local_38 != 1) goto LAB_00f304af;
            }
            else {
              local_34 = (uint)*this_ptr;
              this_ptr = this_ptr + 1;
            }
            uVar10 = 1;
            FUN_00f2d920();
          }
          if (this_ptr == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while( true );
    }
  }
  return (byte *)0x0;
}

