// Function: FUN_0168f150
// Address: 0168f150
// Size: 942 bytes
// Class: MUAraModelManager
// String references:
//   "playbackRegion->getDocumentController() == plugInWrapper->_documentController"
//   "!plugInWrapper->getPlaybackRegionsForPlayback()->containsObjectIdenticalTo(playbackRegion)"
//   "MUAraModelManager::getHostUsesAra1()"
//   "!plugInWrapper->getAudioProcessor()->isRunning()"
//   "provided object ref is invalid"
//   "call required from document main thread"


/* WARNING: Removing unreachable block (ram,0x0168f48d) */
/* WARNING: Removing unreachable block (ram,0x0168f496) */

void FUN_0168f150(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_stack_ffffffffffffffa8;
  char local_50 [32];
  
  FUN_00da7190();
  cVar4 = FUN_016ae5f0();
  if (cVar4 == '\0') {
    FUN_016aea20();
  }
  else if ((unaff_RDI == 0) || (*(longlong *)(unaff_RDI + 0x28) == 0)) {
    FUN_016aea20();
  }
  else {
    FUN_00d50b00();
    cVar4 = FUN_0168a0d0();
    if (cVar4 == '\0') {
      FUN_016aea20();
    }
    else {
      plVar2 = *(longlong **)(unaff_RDI + 0x28);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar2 + 0x390))();
      FUN_00d50b20();
      if (cVar4 == '\0') {
        if ((unaff_RSI == 0) || (cVar4 = FUN_01658870(), cVar4 == '\0')) {
          FUN_016aea20();
        }
        else {
          FUN_00d50b00();
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01654a00();
          lVar3 = *(longlong *)(unaff_RDI + 0x98);
          if ((local_50[0] != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
            FUN_00d50b20();
          }
          if (in_stack_ffffffffffffffa8 == lVar3) {
            lVar3 = *(longlong *)(unaff_RDI + 0xa8);
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            local_50[0] = '\0';
            cVar4 = FUN_00d24090();
            if ((local_50[0] != '\0') && (unaff_RSI != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              while( true ) {
                pVar7 = (pthread_key_t)param_1;
                lVar3 = *(longlong *)(unaff_RDI + 0xa8);
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                iVar1 = *(int *)(lVar3 + 0xc);
                FUN_00d50b20();
                if (iVar1 == 0) break;
                lVar3 = *(longlong *)(unaff_RDI + 0xa8);
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
                if ((local_50[0] != '\0') && (unaff_RSI != 0)) {
                  FUN_00d50b20();
                }
                if ((local_50[0x18] == '\0') && (unaff_RSI != 0)) {
                  FUN_00d50b00();
                }
                FUN_0168eed0();
                if (unaff_RSI != 0) {
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


