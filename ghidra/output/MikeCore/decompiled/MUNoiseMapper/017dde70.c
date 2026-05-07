// Function: FUN_017dde70
// Address: 017dde70
// Size: 2067 bytes
// Class: MUNoiseMapper


/* WARNING: Removing unreachable block (ram,0x017de16f) */
/* WARNING: Removing unreachable block (ram,0x017de17c) */
/* WARNING: Removing unreachable block (ram,0x017de5eb) */
/* WARNING: Removing unreachable block (ram,0x017de5f8) */

ulonglong FUN_017dde70(pthread_key_t param_1,ulonglong param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  pthread_key_t pVar11;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong local_b0;
  char local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  int iVar12;
  int iStack_6c;
  char local_58;
  ulonglong local_50;
  char local_48;
  undefined8 local_38;
  
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar8 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01507970();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    uVar10 = *(ulonglong *)(unaff_RDI + 0x40);
    if (uVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508610();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    FUN_00e7bcc0();
    FUN_00e7b970();
    local_38._4_4_ = (int)(uVar5 >> 0x20);
    iStack_6c = (int)(param_2 >> 0x20);
    iVar12 = (int)(unaff_RSI >> 0x20);
    if (((((local_38._4_4_ == 0) || (unaff_RSI >> 0x20 == 0)) ||
         (cVar1 = FUN_00e7c020(), cVar1 != '\0')) || ((local_38._4_4_ == 0 || (iVar12 == 0)))) ||
       (cVar1 = FUN_00e7c020(), local_50 = unaff_RSI, cVar1 == '\0')) {
      local_88 = FUN_00e7bcc0();
      FUN_00e7b970();
      local_a0 = param_2;
      if (((local_38._4_4_ != 0) && (param_2 >> 0x20 != 0)) &&
         ((cVar1 = FUN_00e7c020(), cVar1 == '\0' &&
          (((local_38._4_4_ != 0 && (iStack_6c != 0)) &&
           (cVar1 = FUN_00e7c020(), local_50 = param_2, cVar1 != '\0')))))) goto LAB_017de050;
    }
    else {
LAB_017de050:
      lVar8 = *(longlong *)(unaff_RDI + 0x40);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar4 = _pthread_getspecific(param_1);
      uVar10 = unaff_RSI;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        uVar10 = *(ulonglong *)(unaff_RSI + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      FUN_0150ff70();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_58 != '\0') && (unaff_RSI != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (*(char *)(unaff_RDI + 0x7c) == '\0') {
        local_38 = uVar5;
        if (*(int *)(unaff_RDI + 0x78) != 1) {
          local_b0 = local_50;
          local_a8 = '\0';
          uVar5 = FUN_00e7bcc0();
          uVar3 = FUN_017e7190(uVar5,&local_b0,&local_a0);
          uVar10 = (ulonglong)uVar3;
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((char)uVar3 != '\0') {
            local_38 = local_a0;
          }
          lVar8 = *(longlong *)(unaff_RDI + 0x40);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)uVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01507970();
          if (((local_38._4_4_ == 0) || (uVar7 >> 0x20 == 0)) ||
             (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
            uVar3 = *(uint *)(unaff_RDI + 0x78);
            uVar10 = (ulonglong)uVar3;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if (uVar3 == 0) {
              local_88 = FUN_00e7bcc0();
              lVar8 = *(longlong *)(unaff_RDI + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific((pthread_key_t)uVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507970();
              FUN_00e7b970();
              uVar7 = FUN_00e7bcc0();
              bVar2 = 0;
              if ((local_38._4_4_ != 0) && (bVar2 = 0, uVar7 >> 0x20 != 0)) {
                bVar2 = FUN_00e7c020();
                bVar2 = bVar2 ^ 1;
              }
              if (lVar8 != 0) {
                FUN_00d50b20();
              }
              if (bVar2 != 0) {
                local_88 = FUN_00e7bcc0();
              }
              lVar8 = *(longlong *)(unaff_RDI + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              local_98 = lVar8;
              pvVar4 = _pthread_getspecific((pthread_key_t)uVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01508450();
              local_80 = local_38;
              pvVar4 = _pthread_getspecific((pthread_key_t)uVar5);
              if (pvVar4 != (void *)0x0) {
                local_80 = local_38;
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  uVar5 = *(ulonglong *)
                           (local_80 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                  local_80 = uVar5;
                }
              }
              pVar11 = (pthread_key_t)uVar5;
              lVar8 = *(longlong *)(unaff_RDI + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              local_90 = lVar8;
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar9 = FUN_01507970();
              FUN_00e7bcc0();
              FUN_00e7b820();
              FUN_00e7b820();
              lVar8 = *(longlong *)(unaff_RDI + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar10 = FUN_01507970();
              FUN_00e7bcc0();
              FUN_00e7b820();
              FUN_00e7b970();
              uVar5 = local_38;
              FUN_0150dbb0(local_38,uVar9);
              pVar11 = (pthread_key_t)uVar5;
              if ((local_48 == '\0') && (uVar7 != 0)) {
                FUN_00d50b00();
              }
              if (lVar8 != 0) {
                FUN_00d50b20();
              }
              if (local_90 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_38 != 0)) {
                FUN_00d50b20();
              }
              if (local_98 != 0) {
                FUN_00d50b20();
              }
              if (uVar7 != 0) {
                if (*(int *)(uVar7 + 0xc) != 0) {
                  uVar10 = *(ulonglong *)(unaff_RDI + 0x40);
                  if (uVar10 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar4 = _pthread_getspecific(pVar11);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_38 = FUN_01507970();
                  if (uVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
          }
          else if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = FUN_016cac90(0,2);
        uVar10 = local_50;
      }
      uVar5 = local_38;
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    local_38 = uVar5;
    if (((iVar12 == 0) || ((local_38._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 == '\0')))) &&
       ((uVar5 = CONCAT71((int7)(uVar10 >> 8),1), iStack_6c == 0 ||
        ((local_38._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0')))))) goto LAB_017de66f;
  }
  uVar5 = 0;
LAB_017de66f:
  return uVar5 & 0xffffffff;
}


