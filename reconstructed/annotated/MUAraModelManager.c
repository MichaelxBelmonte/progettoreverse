// ===== MUAraModelManager — Annotated small functions =====
// 6 readable functions

// ==================================================
// @0168f150 (942 bytes) — math_loop

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong arg1;
  longlong this;
  longlong in_stack_ffffffffffffffa8;
  char local_50 [32];
  
  FUN_00da7190();
  cVar4 = FUN_016ae5f0();
  if (cVar4 == '\0') {
    FUN_016aea20();
  }
  else if ((this == 0) || (*(longlong *)(this + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar4 = FUN_0168a0d0();
    if (cVar4 == '\0') {
      FUN_016aea20();
    }
    else {
      plVar2 = *(longlong **)(this + 0x28);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar2 + 0x390))();
      FUN_00d50b20();
      if (cVar4 == '\0') {
        if ((arg1 == 0) || (cVar4 = FUN_01658870(), cVar4 == '\0')) {
          FUN_016aea20();
        }
        else {
          FUN_00d50b00();
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01654a00();
          lVar3 = *(longlong *)(this + 0x98);
          if ((local_50[0] != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
            FUN_00d50b20();
          }
          if (in_stack_ffffffffffffffa8 == lVar3) {
            lVar3 = *(longlong *)(this + 0xa8);
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            local_50[0] = '\0';
            cVar4 = FUN_00d24090();
            if ((local_50[0] != '\0') && (arg1 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              while( true ) {
                pVar7 = (pthread_key_t)param_1;
                lVar3 = *(longlong *)(this + 0xa8);
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                iVar1 = *(int *)(lVar3 + 0xc);
                FUN_00d50b20();
                if (iVar1 == 0) break;
                lVar3 = *(longlong *)(this + 0xa8);
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                FUN_00d23340();
                local_50[0x18] = local_50[0];
                param_1 = local_50 + 0x18;
                pcVar6 = local_50;
                if (local_50[0] == '\0') {
                  pcVar6 = param_1;
                }
                *pcVar6 = '\0';
                if ((local_50[0] != '\0') && (arg1 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_50[0x18] == '\0') && (arg1 != 0)) {
                  FUN_00d50b00();
                }
                FUN_0168eed0();
                if (arg1 != 0) {
                  FUN_00d50b20();
                }
                if (lVar3 != 0) {
                  FUN_00d50b20();
                }
              }
              FUN_0168e920();
              FUN_0168f6a0();
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016582a0();
              cVar4 = FUN_00bd22a0();
              if (cVar4 != '\0') {
                pvVar5 = _pthread_getspecific(pVar7);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01658b70();
              }
            }
            else {
              FUN_016aea20();
            }
          }
          else {
            FUN_016aea20();
          }
          FUN_00d50b20();
        }
      }
      else {
        FUN_016aea20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @0168e5c0 (598 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong arg1;
  longlong *this;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  
  FUN_00da7190();
  if ((this == (longlong *)0x0) || (this[5] == 0)) {
    FUN_016aea20();
    goto LAB_0168e7fe;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    FUN_016aea20();
  }
  else if (*(char *)((longlong)this + 0xa5) == '\0') {
    FUN_016aea20();
  }
  else {
    cVar2 = (**(code **)(*this + 0x4c8))();
    if (cVar2 != '\0') {
      uVar4 = FUN_00bd1920();
      param_1 = 0x168e8c0;
      switch(uVar4) {
      case 0xb:
        break;
      case 0xc:
        break;
      default:
        break;
      case 0xf:
        goto switchD_0168e649_caseD_f;
      case 0x10:
      }
      param_1 = 0x168e8c0;
      FUN_016aea20();
    }
switchD_0168e649_caseD_f:
    if ((arg1 == 0) || (cVar3 = FUN_01658870(), cVar3 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      lVar1 = this[0x13];
      if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffb8 == lVar1) {
        lVar1 = this[0x15];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d24090();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_0168e920();
          if (cVar2 != '\0') {
            (**(code **)(*this + 0x4d0))();
          }
        }
        else {
          FUN_016aea20();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0168e7fe:
  FUN_00da71b0();
  return;
}




// ==================================================
// @0168ea70 (560 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong arg1;
  longlong *this;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  
  FUN_00da7190();
  if ((this == (longlong *)0x0) || (this[5] == 0)) {
    FUN_016aea20();
    goto LAB_0168ec88;
  }
  FUN_00d50b00();
  cVar2 = FUN_0168a0d0();
  if (cVar2 == '\0') {
    FUN_016aea20();
  }
  else {
    cVar2 = (**(code **)(*this + 0x4c8))();
    if (cVar2 != '\0') {
      uVar4 = FUN_00bd1920();
      param_1 = 0x168ed50;
      switch(uVar4) {
      case 0xb:
        break;
      case 0xc:
        break;
      default:
        break;
      case 0xf:
        goto switchD_0168eaec_caseD_f;
      case 0x10:
      }
      param_1 = 0x168ed50;
      FUN_016aea20();
    }
switchD_0168eaec_caseD_f:
    if ((arg1 == 0) || (cVar3 = FUN_01658870(), cVar3 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      lVar1 = this[0x13];
      if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffb8 == lVar1) {
        lVar1 = this[0x15];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d24090();
        if (cVar3 == '\0') {
          FUN_016aea20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_0168ed70();
        if (cVar2 != '\0') {
          (**(code **)(*this + 0x4d0))();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0168ec88:
  FUN_00da71b0();
  return;
}




// ==================================================
// @0168f7f0 (557 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong arg1;
  longlong this;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  
  FUN_00da7190();
  cVar3 = FUN_016ae5f0();
  if (cVar3 == '\0') {
    FUN_016aea20();
  }
  else if ((this == 0) || (*(longlong *)(this + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      FUN_016aea20();
    }
    else {
      plVar1 = *(longlong **)(this + 0x28);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x390))();
      FUN_00d50b20();
      if (cVar3 == '\0') {
        if ((arg1 == 0) || (cVar3 = FUN_01658870(), cVar3 == '\0')) {
          FUN_016aea20();
        }
        else {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01654a00();
          lVar2 = *(longlong *)(this + 0x98);
          if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
            FUN_00d50b20();
          }
          if (in_stack_ffffffffffffffb8 == lVar2) {
            lVar2 = *(longlong *)(this + 0xa8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            cVar3 = FUN_00d24090();
            if (cVar3 == '\0') {
              FUN_016aea20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            FUN_0168eed0();
          }
          else {
            FUN_016aea20();
          }
          FUN_00d50b20();
        }
      }
      else {
        FUN_016aea20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @01690050 (523 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  FUN_00da7190();
  if ((this == 0) || (*(longlong *)(this + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      FUN_016aea20();
    }
    else if (*(char *)(this + 0xa6) == '\0') {
      FUN_016aea20();
    }
    else if ((arg1 == 0) || (cVar2 = FUN_012c91b0(), cVar2 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c89b0();
      lVar1 = *(longlong *)(this + 0x98);
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffc0 == lVar1) {
        if (*(int *)(*(longlong *)(this + 0xb8) + 0xc) == 0) {
          lVar1 = *(longlong *)(this + 0xb0);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (*(int *)(lVar1 + 0xc) != 0) {
            FUN_016aea20();
          }
          FUN_00d50b20();
        }
        cVar2 = FUN_00d24090();
        if (cVar2 == '\0') {
          FUN_01690310();
        }
        else {
          FUN_016aea20();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @0168faf0 (516 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  FUN_00da7190();
  if ((this == 0) || (*(longlong *)(this + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      FUN_016aea20();
    }
    else if (*(char *)(this + 0xa6) == '\0') {
      FUN_016aea20();
    }
    else if ((arg1 == 0) || (cVar2 = FUN_01658870(), cVar2 == '\0')) {
      FUN_016aea20();
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      lVar1 = *(longlong *)(this + 0x98);
      if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffffc0 == lVar1) {
        if (*(int *)(*(longlong *)(this + 0xb8) + 0xc) != 0) {
          FUN_016aea20();
        }
        lVar1 = *(longlong *)(this + 0xb0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00d24090();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_0168f6a0();
        }
        else {
          FUN_016aea20();
        }
      }
      else {
        FUN_016aea20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}



