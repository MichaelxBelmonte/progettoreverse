// Function: FUN_00790110
// Address: 00790110
// Size: 1952 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00790110(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  void*puVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t **pplVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  int iVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint32_t local_84;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  void*local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_58 + 0x450))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_00757c60();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007901a2;
      }
    }
    else if (local_58 != (int64_t *)0x0) {
LAB_007901a2:
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x2572358;
      *puVar5 = &g_02572358;
      (*g_02572370)();
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb480();
      plVar13 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00790250;
        }
      }
      else if (local_58 != (int64_t *)0x0) {
LAB_00790250:
        local_60 = puVar5;
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar13;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        local_84 = param_2;
        do {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar12 = -local_40._4_4_;
            }
            else {
              iVar12 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar12);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar12 = 0;
            }
            local_40 = CONCAT44(iVar12,(int)local_40);
          }
          lVar7 = (int64_t)(int)local_40;
          iVar12 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar12) {
            FUN_00136d50();
            FUN_00d50b20();
            puVar5 = local_60;
            param_2 = local_84;
            break;
          }
          plVar1 = *(int64_t **)(local_48[2] + 8 + lVar7 * 8);
          local_58 = plVar1;
          local_70 = plVar1;
          if ((g_026fdd70 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
            g_026e3238 = FUN_00115af0();
            g_026e3220 = "MUAudioFileSource";
            g_026e3228 = 0xa0;
            g_026e3230 = FUN_00136df0;
            g_026e3240 = 0;
            ram_00000000026e3248 = 0;
            g_026e3250 = 0;
            ram_00000000026e3258 = 0;
            g_026e3260 = 0;
            ram_00000000026e3268 = 0;
            g_026e3270 = 0;
            ram_00000000026e3278 = 0;
            g_026e3280 = 0;
            ram_00000000026e3288 = 0;
            g_026e3290 = 0;
            ram_00000000026e3298 = 0;
            g_026e32a0 = 0;
            ram_00000000026e32a8 = 0;
            g_026e32b0 = 0;
            ram_00000000026e32b8 = 0;
            g_026e32c0 = 0;
            ram_00000000026e32c8 = 0;
            g_026e32d0 = 0;
            ram_00000000026e32d8 = 0;
            g_026e32e0 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar9 = &local_70;
            if (cVar4 == '\0') {
              pplVar9 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar9 != (int64_t *)0x0) {
            pvVar6 = _pthread_getspecific((void*)pplVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0123b100();
            if (local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_007903d0;
              }
            }
            else if (local_70 != (int64_t *)0x0) {
LAB_007903d0:
              iVar12 = FUN_00b88630();
              if ((iVar12 != 3) && (iVar12 = FUN_00b88630(), iVar12 != 2)) goto LAB_00790668;
              local_70 = local_58;
              local_68 = '\0';
              FUN_00d235a0();
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
        } while( true );
      }
      if (*(int *)((int64_t)puVar5 + 0xc) == 0) {
        uVar10 = 0;
      }
      else {
        uVar11 = (undefined7)((uint64_t)plVar13 >> 8);
        if ((char)param_2 == '\0') {
          FUN_01caeae0();
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00790596;
            }
          }
          else if (local_58 != (int64_t *)0x0) {
LAB_00790596:
            local_60 = puVar5;
            (**(code **)(*this_ptr + 0x468))();
            plVar13 = local_58;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar7 = g_027296a0;
            if (plVar13 == (int64_t *)0x0) {
              if (g_027296a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_027296b0;
              local_c8 = lVar7;
              local_c0 = '\x01';
              if (g_027296b0 != 0) {
                FUN_00d50b00();
              }
              local_b8 = lVar3;
              local_b0 = '\x01';
              local_a8 = 0;
              local_a0 = '\0';
              FUN_00d31230(&local_a8,&local_b8);
              plVar13 = local_58;
              if (local_58 == (int64_t *)0x0) {
                bVar2 = false;
              }
              else if (local_50 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                bVar2 = true;
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (g_027296a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_027296a8;
              if (g_027296a8 != 0) {
                FUN_00d50b00();
              }
              local_e8 = lVar3;
              local_e0 = '\x01';
              local_d8 = 0;
              local_d0 = '\0';
              FUN_00d31230(&local_d8,&local_e8);
              plVar13 = local_58;
              if (local_58 == (int64_t *)0x0) {
                bVar2 = false;
              }
              else if (local_50 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                bVar2 = true;
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_01d65230();
            plVar1 = local_58;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != plVar13) {
              local_90 = '\0';
              local_98 = plVar13;
              FUN_01d64eb0();
              if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
            FUN_00d50b20();
            goto LAB_00790895;
          }
          uVar10 = CONCAT71(uVar11,1);
        }
        else {
          local_78 = 0;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = this_ptr;
          FUN_00129ad0();
          uVar10 = CONCAT71(uVar11,1);
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00790895:
      FUN_00d50b20();
      goto LAB_0079089d;
    }
  }
  uVar10 = 0;
LAB_007908a9:
  return uVar10 & 0xffffffff;
LAB_00790668:
  FUN_00d50b20();
  FUN_00136d50();
  FUN_00d50b20();
  uVar10 = 0;
  if (local_60 != (void*)0x0) goto LAB_00790895;
LAB_0079089d:
  FUN_00d50b20();
  goto LAB_007908a9;
}

