// Function: FUN_016da710
// Address: 016da710
// Size: 2376 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016dacf4) */
/* WARNING: Removing unreachable block (ram,0x016dacfd) */
/* WARNING: Removing unreachable block (ram,0x016da9fa) */
/* WARNING: Removing unreachable block (ram,0x016daa03) */
/* WARNING: Removing unreachable block (ram,0x016daea4) */
/* WARNING: Removing unreachable block (ram,0x016daead) */

void FUN_016da710(pthread_key_t param_1,undefined8 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  pthread_key_t pVar8;
  longlong unaff_RSI;
  ulonglong *unaff_RDI;
  bool bVar9;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  int iStack_4c;
  int iStack_44;
  undefined8 local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019012b0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_019079b0();
  cVar3 = '\0';
  iStack_44 = (int)((ulonglong)param_2 >> 0x20);
  if ((iStack_44 != 0) && (uVar6 >> 0x20 != 0)) {
    cVar3 = FUN_00e7c020();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RSI + 0x78) == 0) {
LAB_016da991:
    bVar2 = false;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_019079b0();
    bVar2 = false;
    if ((uVar7 >> 0x20 == 0) || (iStack_44 == 0)) {
LAB_016da8a0:
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_019079b0();
      if (((uVar7 >> 0x20 == 0) || (iStack_44 == 0)) || (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
        if (!bVar2) goto LAB_016da991;
        bVar9 = false;
        goto LAB_016daffa;
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019012b0();
      uVar7 = *(ulonglong *)(unaff_RSI + 0x78);
      bVar9 = uVar6 == uVar7;
      if ((local_38 != '\0') && (uVar6 != 0)) {
        FUN_00d50b20();
      }
      if (bVar2) goto LAB_016daffa;
      if (uVar6 != uVar7) goto LAB_016da991;
    }
    else {
      cVar4 = FUN_00e7c020();
      if (cVar4 != '\0') {
        bVar2 = false;
        goto LAB_016da8a0;
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901340();
      bVar2 = true;
      if (local_78 != *(longlong *)(unaff_RSI + 0x78)) goto LAB_016da8a0;
      bVar9 = true;
LAB_016daffa:
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar9) goto LAB_016da991;
    }
    if (*(longlong *)(unaff_RSI + 0x78) != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RSI + 0x78) != 0) {
        *(undefined8 *)(unaff_RSI + 0x78) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    bVar2 = true;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01903ed0();
  if (local_38 == '\0') {
    if (uVar6 != 0) {
      FUN_00d50b00();
      goto LAB_016daa08;
    }
  }
  else if (uVar6 != 0) {
LAB_016daa08:
    if ((*(ulonglong *)(unaff_RSI + 0x78) != 0) && (*(ulonglong *)(unaff_RSI + 0x78) == uVar6)) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RSI + 0x78) != 0) {
        *(longlong *)(unaff_RSI + 0x78) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
  }
  local_40 = uVar6;
  if (cVar3 != '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909fa0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    param_1 = 0;
    local_40 = FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar7 = FUN_00e7cc50();
    iStack_4c = (int)(local_40 >> 0x20);
    if (((iStack_4c == 0) || (uVar7 >> 0x20 == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165d690();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01903ed0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909fa0();
    }
  }
  uVar7 = local_40;
  if (!bVar2) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (uVar6 != local_40) goto LAB_016dafd6;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7b820();
  FUN_01903ed0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (bVar2) {
    if (*(char *)(unaff_RSI + 0x80) == '\0') {
      if (*(ulonglong *)(unaff_RSI + 0x78) != local_40) {
        FUN_00d64850();
        uVar1 = *(ulonglong *)(unaff_RSI + 0x78);
        if (uVar1 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(ulonglong *)(unaff_RSI + 0x78) = local_40;
          if (uVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pVar8 = 0;
      FUN_0165cf20();
      FUN_00e7c860();
      FUN_00e7cc50();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_0165d690();
      if (((local_40 >> 0x20 != 0) && (iStack_44 != 0)) && (cVar3 = FUN_00e7c000(), cVar3 != '\0'))
      {
        uVar1 = local_40 >> 0x20;
        local_40 = CONCAT44((int)uVar1,1);
        FUN_00e7c280();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165d690();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01903ed0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (*(ulonglong *)(unaff_RSI + 0x78) != local_40) {
        FUN_00d64850();
        uVar1 = *(ulonglong *)(unaff_RSI + 0x78);
        if (uVar1 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(ulonglong *)(unaff_RSI + 0x78) = local_40;
          if (uVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_01909fa0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
LAB_016dafd6:
  *unaff_RDI = uVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


