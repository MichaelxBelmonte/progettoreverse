// Function: FUN_01504a70
// Address: 01504a70
// Size: 1708 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01504ab0) */
/* WARNING: Removing unreachable block (ram,0x01504abc) */
/* WARNING: Removing unreachable block (ram,0x01504bba) */
/* WARNING: Removing unreachable block (ram,0x01504bc6) */

void FUN_01504a70(undefined8 param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  int extraout_var;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d50f50();
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d890();
    lVar3 = local_58;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50b00();
      FUN_0150fed0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((*(longlong *)(unaff_RDI + 0x60) != 0) && (*(longlong *)(unaff_RDI + 0x68) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x68) = 0;
    FUN_00d50b20();
  }
  plVar9 = *(longlong **)(unaff_RDI + 0x68);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    plVar9 = *(longlong **)(unaff_RDI + 0x68);
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar9 + 0x138))();
  if (*(longlong *)(unaff_RDI + 0x38) != 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01525bc0();
    FUN_00d23310();
    lVar3 = local_58;
    pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
    pcVar8 = (char *)&local_68;
    if (local_50[0] != '\0') {
      pcVar8 = local_50;
    }
    local_68 = CONCAT71(local_68._1_7_,local_50[0]);
    *pcVar8 = '\0';
    if ((local_50[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_68 == '\0') && (lVar3 != 0)) {
      FUN_00d50b00();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = FUN_014ff940();
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014ff990();
    local_58 = CONCAT44(local_58._4_4_,1);
    if ((((local_68._4_4_ == 0) || (cVar1 = FUN_00e7c630(), cVar1 == '\0')) || (extraout_var == 0))
       || (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150c530();
      lVar6 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01504e3a;
        }
      }
      else if (local_58 != 0) {
LAB_01504e3a:
        local_60 = lVar3;
        local_50[0] = '\0';
        local_58 = 0;
        local_48 = lVar6;
        local_40 = 0xffffffff;
        local_38 = 0;
        while( true ) {
          lVar3 = (longlong)(int)local_40;
          iVar7 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          if (*(int *)(local_48 + 0xc) <= iVar7) break;
          lVar6 = *(longlong *)(local_48 + 0x10);
          local_58 = *(longlong *)(lVar6 + 8 + lVar3 * 8);
          pvVar2 = _pthread_getspecific((pthread_key_t)lVar6);
          pVar5 = (pthread_key_t)lVar6;
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507970();
          FUN_00e7b970();
          FUN_00e7bdc0();
          FUN_015084d0();
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508610();
          FUN_00e7b970();
          FUN_00e7bdc0();
          FUN_015085a0();
          if (local_40._4_4_ != 0) {
            if (local_40 < 0) {
              iVar7 = -local_40._4_4_;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar7 = 0;
            }
            local_40 = CONCAT44(iVar7,(int)local_40);
          }
        }
        FUN_0015ed50();
        FUN_00d50b20();
        lVar3 = local_60;
      }
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_016cbc90();
  lVar6 = *(longlong *)(unaff_RDI + 0x60);
  lVar4 = lVar6;
  if (lVar6 == local_58) goto LAB_015050d2;
  if (local_50[0] == '\0') {
    if (local_58 == 0) {
      lVar4 = 0;
      goto LAB_01505091;
    }
    FUN_00d50b00();
    lVar6 = *(longlong *)(unaff_RDI + 0x60);
    *(longlong *)(unaff_RDI + 0x60) = local_58;
    lVar4 = local_58;
  }
  else {
    local_50[0] = '\0';
    lVar4 = local_58;
LAB_01505091:
    *(longlong *)(unaff_RDI + 0x60) = lVar4;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
    lVar4 = local_58;
  }
LAB_015050d2:
  if ((local_50[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    *(undefined8 *)(unaff_RDI + 0x68) = 0;
    FUN_00d50b20();
  }
  return;
}


